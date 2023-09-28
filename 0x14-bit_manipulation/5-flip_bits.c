#include "main.h"



unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, i = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		i += flips & 1;
		flips >>= 1;
	}
	return (i);
}
