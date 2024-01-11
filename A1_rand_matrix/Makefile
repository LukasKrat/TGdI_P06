TARGETS = A1_rand_matrix
CC = gcc
CFLAGS = -Wall -Wconversion -g
LDFLAGS = 

all: $(TARGETS)
# Find all the C files to compile
# SRCS := $(shell find -name *.c)

# String substitution for every object file.
# As an example, hello turns into hello.o
OBJS := $(TARGETS:%=%.o)

# final build step
$(TARGETS): $(OBJS)
	$(CC) $< $(LDFLAGS) -o $@

# implicit built-in rule
#.o.c:
#	$(CC) $(CFLAGS) -c $< -o $@
 
.PHONY: clean

clean:
	rm -rf *.o $(TARGETS)

