#ifndef phlox_vm_h
#define phlox_vm_h

#include "chunk.h"

typedef struct {
	Chunk *chunk;
	uint8_t *ip; //the location of the next instruction to be handled
} VM;

typedef enum {
	INTERPRET_OK,
	INTERPRET_COMPILE_ERROR,
	INTERPRET_RUNTIME_ERROR
} InterpretResult;

void initVM();
void freeVM();

InterpretResult interpret(Chunk *chunk);

#endif
