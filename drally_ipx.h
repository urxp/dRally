#ifndef __DRALLY_IPX_H
#define __DRALLY_IPX_H

#include "types.h"

#define ECB_INUSE_AVAILABLE			0x00		// available
#define ECB_INUSE_AESTEMPORARY		0xE0		// AES temporary
#define ECB_INUSE_IPXCRITICAL		0xF8		// IPX in critical section
#define ECB_INUSE_SPXLISTENING		0xF9		// SPX listening
#define ECB_INUSE_PROCESSING		0xFA    	// processing
#define ECB_INUSE_HOLDING			0xFB		// holding
#define ECB_INUSE_AESWAITING		0xFC		// AES waiting
#define ECB_INUSE_AESCOUNTDOWN		0xFD    	// AES couting down delay time
#define ECB_INUSE_AWAITINGPACKET	0xFE    	// awaiting packet reception
#define ECB_INUSE_SENDINGPACKET		0xFF    	// sending packet

#define ECB_CMPL_SUCCESS			0x00		// success
#define ECB_CMPL_REMOTETERM			0xEC		// remote terminated connection without acknowledging packet
#define ECB_CMPL_ABNORMTERM 		0xED		// abnormal connection termination
#define ECB_CMPL_INVALIDCONNID		0xEE		// invalid connection ID
#define ECB_CMPL_SPXTABLEFULL		0xEF		// SPX connection table full
#define ECB_CMPL_SHOULDNTCANCEL		0xF9		// event should not be cancelled
#define ECB_CMPL_CANNOTCONNECT		0xFA		// cannot establish connection with specified destination
#define ECB_CMPL_CANCELLED			0xFC		// cancelled
#define ECB_CMPL_MALFORMED			0xFD		// malformed packet
#define ECB_CMPL_UNDELIVERABLE		0xFE		// packet undeliverable
#define ECB_CMPL_PHYSICALERROR		0xFF		// physical error

#pragma pack(push,1)

typedef struct IPX_Address {
	__BYTE__ 		NetworkNumber[4];		// 00H  	4	(big-endian) network number
	__BYTE__ 		NetworkNode[6];			// 04H  	6	(big-endian) node number within network
} IPX_Address;

typedef struct IPX_AddressEx {
	IPX_Address 	Address;
	__WORD__ 		Socket;
} IPX_AddressEx;

typedef struct IPX_Header {
    __WORD__		Checksum;         		//00H	2	h-l i's comlement integer
	__WORD__		Length;					//02H	2	high-low unsigned integer
	__BYTE__		TransportControl;		//04H	1	unsigned integer
	__BYTE__		PacketType;				//05H	1	 unsigned integer
	IPX_AddressEx	Dst;					//06H
	IPX_AddressEx	Src;					//12H
} IPX_Header;

typedef struct IPX_Fragment {				//24H	6	Structure(s)
    __POINTER__ 			Address;			    // 		4	8086 long address (off,seg)
    __WORD__ 		Size; 				  	// 		2	Low-high uns.integer 
} IPX_Fragment;

typedef struct IPX_EventControlBlock {
	__POINTER__	    	Link;					//00H 	4	8086 long address (offset,segment)
	__POINTER__ 	    	ESRAddress;				//04H 	4 	8086 long address (offset,segment)
	__BYTE__	    InUse;					//08H 	1 	Unsigned integer 
	__BYTE__	    CompletionCode;			//09H 	1	Unsigned integer 
	__WORD__	    SocketNumber;			//0AH 	2	High-low uinteger 
	__DWORD__	    IPXWorkspace;			//0CH 	4	N/A 
	__BYTE__	    DriverWorkspace[12];	//10H 	12	N/A
	__BYTE__	    ImmediateAddress[6];	//1CH 	6	High-low uns. integer
	__WORD__	    FragmentCount;			//22H 	2	Low-high uns. integer
} IPX_EventControlBlock;

#pragma pack(pop)

__DWORD__ NovellNetWare_IPX_InstallationCheck(void);
void NovellNetWare_IPX_GetInternetworkAddress(IPX_Address * ia);
__DWORD__ NovellNetWare_IPX_OpenSocket(__DWORD__ socket_no, __DWORD__ longevity);
void NovellNetWare_IPX_CloseSocket(__DWORD__);
__DWORD__ NovellNetWare_IPX_CancelEvent(IPX_EventControlBlock *);
void NovellNetWare_IPX_RelinquishControl(void);
__DWORD__ NovellNetWare_IPX_GetDriverMaximumPacketSize(void);
__DWORD__ NovellNetWare_IPX_SendPacket(IPX_EventControlBlock *);
__DWORD__ NovellNetWare_IPX_ListenForPacket(IPX_EventControlBlock *);

IPX_Fragment * getIPXFragment(IPX_EventControlBlock *, int);
int setIPXFragment(IPX_EventControlBlock *, int, __POINTER__, int);

#endif // __DRALLY_IPX_H
