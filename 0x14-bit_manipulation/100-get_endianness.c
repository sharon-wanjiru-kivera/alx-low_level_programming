#include <stdio.h>
#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Prototype: int get_endianness(void);
 * Returns: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
unsigned int x = 0;
char *c = (char *) &x;
return ((int)*c);
}
