#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of argument passed to it
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}