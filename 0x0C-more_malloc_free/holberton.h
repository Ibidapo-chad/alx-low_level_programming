#include <stdio.h>
#include <unistd.h>

/* Gives the length of a string */
int _strlen(char *s);

int _putchar(char c);


/* 0x0C-more_malloc_free */
void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);
