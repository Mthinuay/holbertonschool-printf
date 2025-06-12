#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;
	char ch;
	char *str;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == %)
		{
			i++;
			if (format[i] == 0)
				break;

			if (format[i] == c)
			{
				ch = va_arg(args, int);
				write(1, &ch, 1);
				count++;
			}
			else if (format[i] == s)
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(null)";
				while (*str)
				{
					write(1, str++, 1);
					count++;
				}
			}
			else if (format[i] == %)
			{
				write(1, "%", 1);
				count++;
			}
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
				count += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}

