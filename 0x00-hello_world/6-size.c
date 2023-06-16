#include <stdio.h>
/**
* main - program that prints the size of various types on the PC
*Return: 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long int l;
	long long int j;
	float f;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeo(c));
	printf("size of int: %liu byte(s)\n", (unsigned long)sizeo(i));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeo(l));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeo(j));
	printf("size of float%lu byte(s)\n", (unsigned long)sizeo(f));
	return (0);
}
