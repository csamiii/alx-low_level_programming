#include "main.h"
/**
 * _strlen - The strlen() accepts an argument of type pointer to char.
 * @s: declaration of *s and paramters for the function _strlen
 * Return: Always 0.
 */

int _strlen(char *s)
{
int len;
for (len = 0; s[len] != '\0'; ++len)
{}
return (len);
}
