#include "main.h"

/**
 * _isdigit - Function that verifies if a chacter is a digit or not
 * @c: Tested character
 * Return: 1 for a character that will be a digit or 0 for anything else
 */

int _isdigit(int c)

{
	if ((c >= 48) && (c <= 57))
	{
	return (1);
	}
	return (0);
}
