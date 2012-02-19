VPATH = ../lib ../include
CC = gcc
CPPFLAGS = -W -I../include
TARGETS = sparse seekstdin cat fdflag
OBJECTS = sparse.o seekstdin.o cat.o fdflag.o error.o

all: $(TARGETS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGETS)

error.o: error.h

seekstdin: seekstdin.o error.o
seekstdin.o: error.h

sparse: sparse.o error.o
sparse.o: error.h

cat: cat.o error.o
cat.o: error.h

fdflag: fdflag.o error.o
fdflag.o: error.h
