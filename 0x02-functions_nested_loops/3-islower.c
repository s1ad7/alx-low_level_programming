#include "main.h"

/**
 * _islower - Entry point
 * Return: Returns 1 if c is lowercase Return 0 if C is upercase
 * @c: the character should be checked
 */

int  _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
