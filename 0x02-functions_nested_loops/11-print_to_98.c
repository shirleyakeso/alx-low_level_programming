#include "main.h"
/**
 * print_to_98 - prints all normal numbers from n to 98
 * @n: value to start printing from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
			print("%d, ", n);
		n++;
	}

	} else if (n > 98)
	while (n > 98)
	{
		print("%d, ", n);
			n--;
	}
	printf("98\n");
}
