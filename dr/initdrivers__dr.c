#include "x86.h"

#pragma pack(1)

typedef enum CarType {
    DR_KUPLA, DR_PICKUP, DR_SEDAN, DR_CAMARO, DR_PORSCHE, DR_LOTUS
} CarType;

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
    dword   Color;
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

typedef struct CarInfo {
    const char  Name[0xc];
    dword   Price;
    byte    __0[0x690];

    dword   Engine;        // +6a0
    dword   Tire;
    dword   Armor;

    byte    __1[0x34];
} CarInfo;

    extern byte ___196a84h[];
    extern byte ___196a98h[];
    extern byte ___196a9ch[];
    extern byte ___196aa0h[];
    extern byte ___185a50h[];
    extern dword MyID;
    extern byte ___199f54h[];
    extern byte ___185a30h[];  
    extern Driver Roster[];
    extern CarInfo CarSpecs[];
    extern byte ___1a1ee8h[];
    extern byte ___1a1ec0h[];
    extern byte ___1a1ee0h[];
    extern byte ___1a1eech[];
    extern byte ___1a1ec8h[];
    extern byte ___1a1ed0h[];
    extern byte ___1a1ee4h[];


    int rand__clib3r(void);
    void ___2b318h(void);
    void optionsUndergroundMarket(void);

    char * strcpy__clib3r(char * dest, const char * src);
    
    double log10(double);

// 2415ch
void initDrivers(void){

    dword   n, i;

    const char ListOfDrivers[20][11]  = {
        "SAM SPEED",  "JANE HONDA", "DUKE NUKEM", "NASTY NICK",
        "MOTOR MARY", "MAD MAC",    "MATT MILER", "CLINT WEST",
        "LEE VICE",   "DARK RYDER", "GREG PECK",  "SUZY STOCK",
        "IRON JOHN",  "MORI SATO",  "CHER STONE", "DIESEL JOE",
        "MIC DAIR",   "LIZ ARDEN",  "BOGUS BILL", "FARMER TED"
    };

    D(___196a84h) = 0;
    D(___196a98h) = 0;
    D(___196a9ch) = 0;
    D(___196aa0h) = 0;
    D(___185a50h) = 0;
    MyID = 19;

    optionsUndergroundMarket();

    D(___199f54h) = 0;
    D(___185a30h) = 0;

    n = i = 0;

    while(n < 19){

        Roster[n].__4c = 0;
        Roster[n].__50 = 0;
        Roster[n].__54 = 0;
        Roster[n].__58 = 0;
        Roster[n].Damage = 0;
        Roster[n].Money = rand__clib3r() % 0x186a0;
        Roster[n].Engine = rand__clib3r() % CarSpecs[Roster[n].Car].Engine;
        Roster[n].Tire = rand__clib3r() % CarSpecs[Roster[n].Car].Tire;
        Roster[n].Armor = rand__clib3r() % CarSpecs[Roster[n].Car].Armor;
        Roster[n].CarPrice = CarSpecs[Roster[n].Car].Price;
        Roster[n].Standings = n+1;

        Roster[n].Car
            = (n <= 2) ? DR_LOTUS
            : (n <= 6) ? DR_PORSCHE
            : (n < 10) ? DR_CAMARO
            : (n < 14) ? DR_SEDAN
            : (n < 17) ? DR_PICKUP
            : DR_KUPLA;

        Roster[n].Points = 402 - 11*n - 2*(int)(77*log10((double)(n+1)));
        Roster[n].Points >>= 2;
  
        if(!i&&(n == Roster[MyID].Face)) i++;

        strcpy__clib3r(Roster[n].Name, ListOfDrivers[n+i]);
        Roster[n].Face = n+i;
        Roster[n].Color = n+i;

        n++;
    }

    Roster[MyID].Damage = 0;
    Roster[MyID].Engine = 0;
    Roster[MyID].Tire = 0;
    Roster[MyID].Armor = 0;
    Roster[MyID].Car = DR_KUPLA;
    Roster[MyID].Money = 0x1ef;
    Roster[MyID].__34 = -1;
    Roster[MyID].__38 = -1;
    Roster[MyID].CarPrice = CarSpecs[DR_KUPLA].Price;
    Roster[MyID].Points = 0;
    Roster[MyID].Standings = 0x14;
    Roster[MyID].__4c = 0;
    Roster[MyID].__50 = 0;
    Roster[MyID].__54 = 0;
    Roster[MyID].__58 = 0;

    ___2b318h();

    D(___1a1ec0h) = 0;
    D(___1a1ec8h) = 0;
    D(___1a1ed0h) = 0;
    D(___1a1ee0h) = 0;
    D(___1a1ee4h) = 1;
    D(___1a1ee8h) = 0;
    D(___1a1eech) = 0;
}
