TARGETS = M1_ausgabe
CC = gcc 
CFLAGS = -Wall -Wconversion -g
LDFLAGS = -l bcm2835

all: M1_ausgabe

M1_ausgabe: M1_ausgabe.o 
	$(CC) $(CFLAGS) $<  $(LDFLAGS)  -o $@

#.o.c:
#	$(CC) $(CFLAGS) -c $< -o $@
 
.PHONY: clean

clean:clean:
	rm -rf *.o $(TARGETS)

