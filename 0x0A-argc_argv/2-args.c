#include <stdio.h>

/**
 * main - prints the entire function.
 * @argc: argument counter for int.
 * @argv: argument value for char.
 *
 * Return: 0
**/

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);

}
