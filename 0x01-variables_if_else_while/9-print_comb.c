#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if positive, zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int i;

	for (i = 48; i < 58; i++)
	putchar(i);
	if (i != 57)
		putchar(',');
		putchar(' ');

	putchar('\n');
	return (0);
}
