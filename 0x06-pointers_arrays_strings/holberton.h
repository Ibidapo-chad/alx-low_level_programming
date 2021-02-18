#include <stdio.h>
#include <unistd.h>

/* Gives the length of a string */
int _strlen(char *s);

int _putchar(char c);

/* concatenation of two strings with null termination */
char *_strcat(char *dest, char *src);

/* concatenation of two strings without null termination 
 * where n is number of bytes
 */
char *_strncat(char *dest, char *src, int n);

/* copies a string */
char *_strncpy(char *dest, char *src, int n);

/* It compares two strings */
int _strcmp(char *s1, char *s2);

/* Reverses the content of an array */
void reverse_array(int *a, int n);

/* Converts lowercase characters to uppercase characters */
char *string_toupper(char *);

/* Capitalizes all words of a string */
char *cap_string(char *);

/* Encodes a string into 1337 */
char *leet(char *);

/* Encodes a string into rot13 */
char *rot13(char *);
