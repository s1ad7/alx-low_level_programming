#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 *
 */

int main(void)
{
	int n;
	int p;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (p = 97; p <= 102; p++)
	{
		putchar(p);
	}

	putchar('\n');
	return (0);
}
