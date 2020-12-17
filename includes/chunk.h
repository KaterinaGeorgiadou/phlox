#ifndef phlox_chunk_h
#define phlox_chunk_h

#include "common.h"

typedef enum {
	OP_RETURN,
} OpCode;

typedef struct {
	int count;
	int capacity;
	uint8_t *code;
} Chunk;

void initChunk(Chunk *chunk);
void freeChunk(Chunk *chunk);
void writeChunk(Chunk *chunk, uint8_t byte); //allocate a byte to the end of the chunk

#endif
