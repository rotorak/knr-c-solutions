CFLAGS=-Wall -g
SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))
all: $(PROGS)
%: %.c
	$(CC) $(CFLAGS)  $< -o $@
clean:
	rm -f $(PROGS)