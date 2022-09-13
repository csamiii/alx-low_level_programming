#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int a, b, i, result;

        a = 1;
        b = 2;

        for (i=1; i<=98; i++)
        {
                printf("%d ", a);
                result = a + b;
                a = b;
                b = result;
        }

}
