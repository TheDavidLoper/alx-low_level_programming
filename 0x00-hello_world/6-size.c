#include <stdio.h>
/**
* main - program that prints the size of various types on the PC
*Return: 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeo(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeo(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeo(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeo(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeo(f));
	return (0);
}
