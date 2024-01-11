TARGETS = M3_eingabe
CC = gcc
CFLAGS = -Wall -Wconversion -g

all: M3_eingabe


M3_eingabe: M3_eingabe.o
	$(CC) $(CFLAGS) $<  -l bcm2835  -o $@

#.o.c:
#	$(CC) $(CFLAGS) -c $< -o $@
 
.PHONY: clean

clean:clean:
	rm -rf *.o $(TARGETS)

