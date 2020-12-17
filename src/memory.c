#include <stdlib.h>

#include "memory.h"

/*
 * oldSize	newSize		Operation
 * 0		Non-zero	Allocate new block
 * Non-zero	0		Free allocation
 * Non-zero	< oldSize	Shrink existing allocation
 * Non-zero	> oldSize	Grow existing allocation
 */
void *reallocate(void *pointer, size_t oldSize, size_t newSize)
{
	if (newSize == 0) {
		free(pointer);
		return NULL;
	}

	void *result = realloc(pointer, newSize);
	if (result == NULL) exit(1);
	return result;
}
