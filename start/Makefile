OBJS = cstrt386.obj

start: $(OBJS)

%.obj: %.asm
	nasm -f obj -o $@ $<

.PHONY: clean
clean:
	@rm -f $(OBJS)
