void ___5ff99h(void);
void dRally_Memory_init(void);
void dRally_System_clean(void);

void dRally_System_init(void){

    dRally_Memory_init();
}


void dRally_System_clean(void){

    ___5ff99h();
    dRally_Memory_clean();
}
