#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
