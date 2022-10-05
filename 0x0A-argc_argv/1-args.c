#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: argument counter for int
 * @argv: value counter for arguments for char
 * Return: 0
**/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}

