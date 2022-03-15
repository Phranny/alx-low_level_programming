#include <_putchar.h>

/**
 * main - This script prints "_putchar" 
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = _putchar)
	{
		_putchar(ch);
		ch++
	}
	_putchar('\n');
	return (0);
}
