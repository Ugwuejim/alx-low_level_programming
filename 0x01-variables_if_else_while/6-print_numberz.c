#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10 start from 0 without char
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
