#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int i = 1;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	i <<= index;
	*n = (*n | i);
	return (1);
}
