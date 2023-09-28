#include "main.h"



int get_endianness(void)
{
	int i = 1;
	char *check;

	check = (char *)&i;
	return ((int)check[0]);
}
