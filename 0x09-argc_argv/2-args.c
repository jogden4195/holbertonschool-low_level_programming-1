#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguemnts program receives
 * @argc: arguments received
 * @argv: arguments passed
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
