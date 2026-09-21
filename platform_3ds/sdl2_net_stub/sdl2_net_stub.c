/*
 * Part of the dRally 3DS port - https://github.com/urxp/dRally
 * SPDX-License-Identifier: MIT (see LICENSE and THIRD_PARTY.md)
 */
/*
 * sdl2_net_stub.c - inert SDL_net for the Nintendo 3DS build (see include/SDL2/SDL_net.h).
 *
 * Design rule: never return NULL where the engine expects a usable handle, and never block.
 * The engine then runs single player exactly like it does on Windows (where the IPX peers it
 * looks for simply do not exist), instead of crashing on a missing networking layer.
 */
#include <SDL2/SDL_net.h>
#include <stdlib.h>
#include <string.h>

static const char *dr3_net_error = "SDL_net unavailable in the Nintendo 3DS build (stub backend)";

/* dummy handle: valid pointers, so unchecked use cannot crash */
static struct _UDPsocket { int unused; } dr3_dummy_udp;

int SDLNet_Init(void)
{
    return 0;   /* pretend networking came up; every socket operation is inert */
}

void SDLNet_Quit(void) { }

const char *SDLNet_GetError(void)
{
    return dr3_net_error;
}

int SDLNet_ResolveHost(IPaddress *address, const char *host, uint16_t port)
{
    (void)host;
    if (address) {
        address->host = 0;
        address->port = port;
    }
    return -1;
}

TCPsocket SDLNet_TCP_Open(IPaddress *address)
{
    (void)address;
    return (TCPsocket)0;
}

void SDLNet_TCP_Close(TCPsocket sock) { (void)sock; }

UDPsocket SDLNet_UDP_Open(uint16_t port)
{
    (void)port;
    return (UDPsocket)&dr3_dummy_udp;
}

int SDLNet_UDP_Bind(UDPsocket sock, int channel, const IPaddress *address)
{
    (void)sock; (void)channel; (void)address;
    return -1;
}

int SDLNet_UDP_Send(UDPsocket sock, int channel, UDPpacket *packet)
{
    (void)sock; (void)channel; (void)packet;
    return 0;   /* nothing sent */
}

int SDLNet_UDP_Recv(UDPsocket sock, UDPpacket *packet)
{
    (void)sock; (void)packet;
    return 0;   /* nothing received, never blocks */
}

void SDLNet_UDP_Close(UDPsocket sock) { (void)sock; }

UDPpacket *SDLNet_AllocPacket(int size)
{
    UDPpacket *packet;
    if (size <= 0) return (UDPpacket *)0;
    packet = (UDPpacket *)calloc(1, sizeof(UDPpacket));
    if (!packet) return (UDPpacket *)0;
    packet->data = (uint8_t *)calloc(1, (size_t)size);
    if (!packet->data) {
        free(packet);
        return (UDPpacket *)0;
    }
    packet->maxlen = (uint32_t)size;
    return packet;
}

void SDLNet_FreePacket(UDPpacket *packet)
{
    if (!packet) return;
    free(packet->data);
    free(packet);
}

void SDLNet_Write16(uint16_t value, void *area)
{
    uint8_t *p = (uint8_t *)area;
    p[0] = (uint8_t)(value >> 8);
    p[1] = (uint8_t)(value & 0xFF);
}

void SDLNet_Write32(uint32_t value, void *area)
{
    uint8_t *p = (uint8_t *)area;
    p[0] = (uint8_t)(value >> 24);
    p[1] = (uint8_t)(value >> 16);
    p[2] = (uint8_t)(value >> 8);
    p[3] = (uint8_t)(value & 0xFF);
}

uint16_t SDLNet_Read16(const void *area)
{
    const uint8_t *p = (const uint8_t *)area;
    return (uint16_t)(((uint16_t)p[0] << 8) | p[1]);
}

uint32_t SDLNet_Read32(const void *area)
{
    const uint8_t *p = (const uint8_t *)area;
    return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) | ((uint32_t)p[2] << 8) | (uint32_t)p[3];
}
