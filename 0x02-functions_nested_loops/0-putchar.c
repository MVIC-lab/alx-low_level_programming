#include "main.h"

/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
	char a[10] = "_putchar";

	int j;

	for (j=0;j<8;j++)
	{
		_putchar(a[j]);
	}
	_putchar(10);
	return (0);
}
