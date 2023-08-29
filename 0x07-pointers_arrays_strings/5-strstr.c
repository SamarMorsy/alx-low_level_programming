#include "main.j"
/**
 * _strstr - find string
 * @haystack: inpuzt
 * @needle: input
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] != haystack[i + j])
					return (NULL);
			}
		}
	}
	return (&haystack[i]);
}
