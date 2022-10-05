#include <stdio.h>

/**
 * main - Main function - prints name of program
 *@argc: char argument counter
 *@argv: char argument value
 *Return: 0
**/

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);

	return (0);
}
