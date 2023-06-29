#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int q, w, e;

	q = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (q < size)
	{
		w = size - q < 10 ? size - q : 10;
		printf("%08x: ", q);
		for (e = 0; e < 10; e++)
		{
			if (e < w)
				printf("%02x", *(b + q + e));
			else
				printf("  ");
			if (e % 2)
			{
				printf(" ");
			}
		}
		for (e = 0; e < w; e++)
		{
			int c = *(b + q + e);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		q += 10;
	}
}
