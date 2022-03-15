#include <main.h>

/**
* main - This script prints "_putchar"
* followed by a new line
* Return: ALways 0 (Success)
*/
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_puchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
