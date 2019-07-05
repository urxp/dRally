#include "x86.h"

#pragma pack(1)

typedef struct Driver {
    char    Name[0xc];      // +0
    dword   Damage;         // +ch
    dword   Engine;         // +10h
    dword   Tire;           // +14h
    dword   Armor;          // +18h
    dword   Car;            // +1ch
    dword   __20;
    dword   __24;
    dword   __28;
    dword   __2c;
    dword   Money;          // +30h
    dword   __34;
    dword   __38;
    dword   CarPrice;       // +3ch
    dword   Face;           // +40h
    dword   Points;         // +44h
    dword   Standings;      // +48h
    dword   __4c;
    dword   __50;
    dword   __54;
    dword   __58;
    dword   __5c;
    dword   __60;
    dword   __64;
    dword   __68;
} Driver;

typedef struct UndergroundMarket {
    dword   Mines;
    dword   Spikes;
    dword   RocketFuel;
    dword   Sabotage;
} UndergroundMarket;

    extern UndergroundMarket UndergroundMarketOptions;
    extern Driver Roster[];
    extern dword NetworkConnectionEstablished;
    extern dword MyFaceId;

// 2ec68h
void optionsUndergroudMarket(void){

    dword   n;

    UndergroundMarketOptions.Mines = 1;
    UndergroundMarketOptions.Spikes = 1;
    UndergroundMarketOptions.RocketFuel = 1;
 
    if(NetworkConnectionEstablished){

        UndergroundMarketOptions.Sabotage = 0;
    }
    else {

        n = 0;

        while((n < 20)&&((n == MyFaceId)||(Roster[n].Points < Roster[MyFaceId].Points))) n++;

        UndergroundMarketOptions.Sabotage = !(n == 20);
    }
}
