VPATH = ../lib ../include
CC = gcc
CPPFLAGS = -Wall -I../include
TARGETS = myls cat pid err uidgid shell2
OBJECTS = pid.o error.o myls.o cat.o getcputc.o \
          err.o uidgid.o shell2.o

all: $(TARGETS)

clean:
	$(RM) $(OBJECTS)
	$(RM) $(TARGETS)

error.o: error.h

myls: myls.o error.o
myls.o: error.h

mycat: mycat.o error.o
mycat: error.h

getcputc: getcputc.o error.o
getcputc.o: error.h

pid: pid.o
pid.o:

shell1: shell1.o error.o
shell1.o: error.h

err: err.o
err.o:

uidgid: uidgid.o
uidgid.o:

shell2: shell2.o error.o
shell2.o: error.h
