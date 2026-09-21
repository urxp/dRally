/*
 * SDL_net.h - minimal stand-in for the Nintendo 3DS build.
 *
 * devkitPro ships no SDL2_net for the 3DS (and SDL2 has no n3ds net backend), but dRally's
 * db_ipx.c is compiled whenever IPXNET is defined - exactly like the working Windows build.
 * Instead of ripping multiplayer out of the engine (which risks unresolved symbols), this stub
 * provides the handful of SDL_net entry points db_ipx.c uses. They all fail gracefully, so the
 * multiplayer menu exists but cannot connect (multiplayer was already non-functional on PC).
 */
#ifndef SDL2_3DS_SDL_NET_H
#define SDL2_3DS_SDL_NET_H

#include <stdint.h>

#define SDL_NET_MAJOR_VERSION 2
#define SDL_NET_MINOR_VERSION 0
#define SDL_NET_PATCHLEVEL 1

typedef struct {
    uint32_t host;      /* network byte order */
    uint16_t port;      /* network byte order */
} IPaddress;

typedef struct _TCPsocket *TCPsocket;
typedef struct _UDPsocket *UDPsocket;
typedef struct _SDLNet_SocketSet *SDLNet_SocketSet;

typedef struct {
    int      channel;
    uint32_t len;
    uint32_t maxlen;
    uint32_t status;
    IPaddress address;
    uint8_t *data;
} UDPpacket;

extern int SDLNet_Init(void);
extern void SDLNet_Quit(void);
extern const char *SDLNet_GetError(void);

extern int SDLNet_ResolveHost(IPaddress *address, const char *host, uint16_t port);
extern TCPsocket SDLNet_TCP_Open(IPaddress *address);
extern void SDLNet_TCP_Close(TCPsocket sock);

extern UDPsocket SDLNet_UDP_Open(uint16_t port);
extern int SDLNet_UDP_Bind(UDPsocket sock, int channel, const IPaddress *address);
extern int SDLNet_UDP_Send(UDPsocket sock, int channel, UDPpacket *packet);
extern int SDLNet_UDP_Recv(UDPsocket sock, UDPpacket *packet);
extern void SDLNet_UDP_Close(UDPsocket sock);

extern UDPpacket *SDLNet_AllocPacket(int size);
extern void SDLNet_FreePacket(UDPpacket *packet);

extern void SDLNet_Write16(uint16_t value, void *area);
extern void SDLNet_Write32(uint32_t value, void *area);
extern uint16_t SDLNet_Read16(const void *area);
extern uint32_t SDLNet_Read32(const void *area);

#endif /* SDL2_3DS_SDL_NET_H */
