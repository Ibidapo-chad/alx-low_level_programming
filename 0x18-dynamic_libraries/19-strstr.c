#include "holberton.h"

/**
 * _strstr - checks for uppercase characters
 * @haystack: character to be checked
 * @needle: source dest.
 * Return: 1 if c is uppercase otherwise 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *scanned = haystack;
	char *sub = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (scanned);
		}
		needle = sub;
		scanned++;
		haystack = scanned;
	}
	return (0);
}
