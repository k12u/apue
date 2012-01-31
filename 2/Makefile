VPATH = ../lib ../include
CC = gcc
CPPFLAGS = -W -I../include
TARGETS = conf pathmax openmax
OBJECTS = conf.o pathmax.o error.o openmax.o

all: $(TARGETS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGETS)

error.o: error.h

conf: conf.o error.o
conf.o: error.h

pathname: pathname.o error.o
pathname.o: error.h

openmax: openmax.o error.o
openmax.o: error.h
