#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates random
 * valid passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[100];
	int i, totalSum, remainder;

	totalSum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		totalSum += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - totalSum) - '0' < 78)
		{
			remainder = 2772 - totalSum - '0';
			totalSum += remainder;
			putchar(remainder + '0');
			break;
		}
	}

	putchar('\n');

	return (0);
}
