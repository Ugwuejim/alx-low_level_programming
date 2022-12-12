#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char l_letter = 122;

	while (l_letter >= 97)
	{
		putchar(l_letter);
		l_letter--;
	}

	putchar('\n');

	return (0);
}
