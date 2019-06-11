#define __VERSION__ 2

typedef unsigned long	dword;

#if __VERSION__ == 1

#define __F(name)	name
#define __V(name) 	name

extern const char __V(string__MUSICS_BPA)[];
dword __F(___10240h)(const char *, const char *);

dword __F(___10474h)(const char * elm){

	return __F(___10240h)(&__V(string__MUSICS_BPA), elm);
}

#elif __VERSION__ == 2

extern const char string__MUSICS_BPA[];
dword ___10240h(const char *, const char *);

dword ___10474h(const char * elm){

	return ___10240h(&string__MUSICS_BPA, elm);
}

#elif __VERSION__ == 3

dword ___10240h(const char *, const char *);

dword ___10474h(const char * elm){

	return ___10240h("MUSICS.BPA", elm);
}

#endif
