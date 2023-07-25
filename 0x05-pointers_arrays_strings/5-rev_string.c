#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int l = 0;
	int t = 0;
	int e;

	char temp;

	while (s[l] != '\0')
		l++;

	e = l - 1;

	while (t < e)
	{
		temp = s[t];
		s[t] = s[e];
		s[e] = temp;

		t++;
		e--;
	}
}
