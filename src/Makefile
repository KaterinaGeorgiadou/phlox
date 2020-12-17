IDIR = ../includes
CC = gcc
CFLAGS = -I$(IDIR)

ODIR = obj
LDIR = ../lib

LIBS = -lm

_DEPS = common.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = phlox.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

phlox: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
