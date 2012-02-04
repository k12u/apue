VPATH = ../lib ../include
CC = gcc
CPPFLAGS = -W -I../include
TARGETS = sparse seekstdin
OBJECTS = sparse.o seekstdin.o error.o

all: $(TARGETS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGETS)

error.o: error.h

seekstdin: seekstdin.o error.o
seekstdin.o: error.h

sparse: sparse.o error.o
sparse.o: error.h
