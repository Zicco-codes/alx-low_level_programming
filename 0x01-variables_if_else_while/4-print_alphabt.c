#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
