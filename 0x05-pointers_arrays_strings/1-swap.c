#include "main.h"

/**
* swap_int - swaping 2 integer using a pointer
* @a:integer
* @b:integer
* Return:void
*/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
	return;

}
