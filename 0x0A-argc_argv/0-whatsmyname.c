#include <stdio.h>
#include "main.h"

/**
 * main - prints a program that prints its name
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
