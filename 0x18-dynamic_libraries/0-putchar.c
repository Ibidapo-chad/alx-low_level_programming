#include "holberton.h"

/**
 * _putchar - checks for uppercase characters
 * @c: character to be checked
 * Return: 1 if c is uppercase otherwise 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
