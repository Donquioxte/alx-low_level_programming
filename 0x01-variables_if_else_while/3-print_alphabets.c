#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase, and then in uppercase
 *
 *Release: Always 0(Success)
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
	       	(c <= 'z')
		{
			putchar(c);
			c++;
		}
	while
		(d <= 'Z')
		{
			putchar(d);
			d++;
		}
	return (0);
}