#define __BPA__ 2

typedef unsigned long	dword;

#if __BPA__ == 1

#define __F(name)	name
#define __V(name) 	name

extern const char __V(string__MUSICS_BPA)[];
dword __F(getentrysize__bpa)(const char *, const char *);

dword __F(___10474h)(const char * elm){

	return __F(getentrysize__bpa)(__V(string__MUSICS_BPA), elm);
}

#elif __BPA__ == 2

extern const char string__MUSICS_BPA[];
dword getentrysize__bpa(const char *, const char *);

dword ___10474h(const char * elm){

	return getentrysize__bpa(string__MUSICS_BPA, elm);
}

#elif __BPA__ == 3

dword getentrysize__bpa(const char *, const char *);

dword ___10474h(const char * elm){

	return getentrysize__bpa("MUSICS.BPA", elm);
}

#endif
