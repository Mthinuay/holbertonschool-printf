#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;

	len = _printf("Character: %c\n", A);
	_printf("Length: %d\n", len);

	len = _printf("String: %s\n", "Hello, Holberton!");
	_printf("Length: %d\n", len);

	len = _printf("Percent: %%\n");
	_printf("Length: %d\n", len);

	len = _printf("Unknown: %r\n"); // should print %r
	_printf("Length: %d\n", len);

	return (0);
}

