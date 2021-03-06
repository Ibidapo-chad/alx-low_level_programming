#include <stdio.h>
#include <unistd.h>

/* Gives the length of a string */
int _strlen(char *s);

int _putchar(char c);

void _puts(char *s);

/* 0x0B-malloc_free */
char *create_array(unsigned int size, char c);

char *strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);
