#include <stdio.h>

/**
 * print_message - a function that prints a message before main is executed.
 * Return: 0
 */
void print_message(void) __attribute__((constructor));

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
