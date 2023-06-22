#include "david.h"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char David[5] = {'D', 'a', 'v', 'i', 'd'};
	unsigned int c;

	for (c = 0; c < sizeof(David); c++)
	{
		_putchar(David[c]);
	}
_putchar('\n');
return (0);
}
