#include "main.h"
/**
 * rev_string - reverse string
 * @s: input
*/
void rev_string(char *s)
{
	int l = 0;
	int i;
	char *begin, *end, temp;

	while (s[l] != '\n')
		l++;
	begin = s;
	end = s + l - 1;
	for (i = 0; i < (l - 1) / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
