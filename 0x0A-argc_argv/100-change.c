#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of coins
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int index = 0, coinCount = 0, amount;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	amount = atoi(argv[1]);

	while (amount >= 1)
	{
		while (amount >= coins[index])
		{
			amount -= coins[index];
			coinCount++;
		}
		index++;
	}

	printf("%d\n", coinCount);
	return (0);
}
