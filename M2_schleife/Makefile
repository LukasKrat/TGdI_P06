TARGETS = M2_schleife
CC = gcc 
CFLAGS = -Wall -Wconversion -g

all: M2_schleife


M2_schleife: M2_schleife.o 
	$(CC) $(CFLAGS) $<  -l bcm2835  -o $@

#.o.c:
#	$(CC) $(CFLAGS) -c $< -o $@
 
.PHONY: clean

clean:clean:
	rm -rf *.o $(TARGETS)

