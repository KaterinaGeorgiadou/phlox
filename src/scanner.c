#include <stdio.h>
#include <string.h>

#include "common.h"
#include "scanner.h"

typedef struct {
	const char *start; //marks the beginning of the current lexeme being scanned
	const char *current; //current character being looked at
	int line; //line of lexeme for the error reporting
} Scanner;

Scanner scanner;

void initScanner(const char *source)
{
	scanner.start = source;
	scanner.current = source;
	scanner.line = 1;
}
