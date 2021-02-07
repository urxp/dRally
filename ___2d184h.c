#include "drally.h"

void ___13094h_cdecl(const char *, dword);
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
	
// MARKET STUFF OUT OF STOCK INFO BOX MESSAGE
void ___2d184h(void){

	___13248h_cdecl(0x90, 0x72, 0x180, 0x77, 1);
	___13094h_cdecl("[OUT OF STOCK", 0x136aa);
	___13094h_cdecl("", 0x15eaa);
	___13094h_cdecl("Sorry, no can do. That's out of", 0x186aa);
	___13094h_cdecl("stock. Hold your horse(power)s", 0x1aeaa);
	___13094h_cdecl("till after the next race.", 0x1d6aa);
	___13094h_cdecl("", 0x1feaa);
}
