#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int neg_count = 0;
	int result = 0;
	int len = 0;
	int found_digit = 0;
	int digit_value = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && found_digit == 0)
	{
		if (s[i] == '-')
			neg_count++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit_value = s[i] - '0';
			if (neg_count % 2)
				digit_value = -digit_value;
			result = result * 10 + digit_value;
			found_digit = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			found_digit = 0;
		}
		i++;
	}

	if (found_digit == 0)
		return (0);

	return (result);
}
