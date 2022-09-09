#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alphabet in upper and lower
 *
 * Return: zero
 */
int main(void)
{
	char ch;
	char CH;
	for (ch = 'a'; ch <= 'z'; ch++)
		purchar (ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		purchar(CH);
	putchar('\n');
	return (0);
}
