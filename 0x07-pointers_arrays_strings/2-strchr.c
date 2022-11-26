/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to our string array input
 * @c: character to locate from input array
 *
 * Return: first occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
	int j, i, len=0;

	for (j = 0; s[j] != '\0'; j++)
		len++;

	for (i = 0; i <= len; i++)
		if (s[i] == c)
			return (s + i);
	return (s);
}
