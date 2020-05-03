Makefile = Makefile
#CC = clang
CC = gcc

ipxnet: ipxnet.o $(Makefile)
	$(CC) -s -o $@ $< -lSDL2 -lSDL2_net

ipxnet.o: ipxnet.c $(Makefile)
	$(CC) -c -o $@ $< -O3

.PHONY: clean
clean:
	@rm -f *.o ipxnet
