TARGETS = M4_verzweigung
CC = gcc
CFLAGS = -Wall -Wconversion -g

all: M4_verzweigung


M4_verzweigung: M4_verzweigung.o
	$(CC) $(CFLAGS) $<  -l bcm2835  -o $@

#.o.c:
#	$(CC) $(CFLAGS) -c $< -o $@
 
.PHONY: clean

clean:clean:
	rm -rf *.o $(TARGETS)

