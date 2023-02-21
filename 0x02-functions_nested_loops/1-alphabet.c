#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return:0 (Success)
 */

int  main(void)
{
	print_alphabet("Print the alphabet");
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
