#include "main.h"
/**
* swap_int - swap A with B
* @a: pointer
* @b: pointer
*/
void swap_int(int *a, int *b)
{
	int tempvalue  = *a;
	*a = *b;
	*b = tempvalue;
}
