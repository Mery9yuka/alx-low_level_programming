#include <stdio.h>

int add(int i, int j)
{
	return i + j;
}

int sub(int i, int j)
{
	return i - j;
}

int mul(int i, int j)
{
	return i * j;
}

int div(int i, int j)
{
	if (j == 0)
	{
		printf("Error: You can't divise by zero\n");
		return 0;
	}
	return i / j;
}

int mod(int i, int j)
{
	if (j == 0)
	{
		printf("Error: You can't divise  by zero\n");
		return 0;
	}
	return i % j;
}
