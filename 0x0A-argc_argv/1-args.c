#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: number of command-line arguments
 * @argv: An array of strings that contain a command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
