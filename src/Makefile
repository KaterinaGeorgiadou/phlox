IDIR = ../includes
CC = gcc
CFLAGS = -I$(IDIR)

ODIR = obj
LDIR = ../lib

LIBS = -lm

_DEPS = common.h chunk.h memory.h debug.h value.h vm.h compiler.h scanner.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = phlox.o chunk.o memory.o debug.o value.o vm.o compiler.o scanner.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

phlox: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
