#include "main.h"

/**
 *
 * _isalpha - check for alphabetic character
 * @c : Main character
 * Return : 1 if c is an alphabetic character or 0 for anything else
 */

int _isalpha(int c)

	{
		 if ((с >= 65 && c <= 90) || (с >= 97 && c <= 122))
	{
		return (1);
	}
		 return (0);
	}
