#include <stdio.h>
/**
 * main - prints alphabets in lowercase and uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char a = 'z';

	while (c <= a)
	{
		putchar(c);
		c++;
	}

	char b = 'A';
	char d = 'Z';

	while (b <= d)
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
