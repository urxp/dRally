typedef unsigned char   byte;
typedef unsigned long   dword;

extern byte * VGABufferPtr_0;

void __renderTextToBuffer(byte * __arg0, byte * __arg1, byte * __arg2, dword __arg3){

    dword w, h;
    byte * screen_p, * source_p;
    byte string_b, px;

    while((string_b = *__arg2++)){
        if(string_b != 0xFA){

            source_p = __arg0 + __arg1[0] * __arg1[1] * (string_b - 0x20);
            screen_p = VGABufferPtr_0 + __arg3;

            h = __arg1[1];
            while(h--){
                w = __arg1[0];
                while(w--){
                    if((px = *source_p++)) *screen_p = px;
                    screen_p++;
                }
                screen_p += 640 - __arg1[0];
            }
            __arg3 += __arg1[string_b - 0x1E];
        }
        else {
            __arg3++;
        }
    }
}
