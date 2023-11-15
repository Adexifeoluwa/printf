#include "main.h"
/**
 * _printf: This is used to print out the formated text to the standard output
 * @format: This is the format specifier
 * Return: no of bytes that was printed
 */


int _printf(const char *format, ...)
{

	unsigned int i, count = 0;

	int s_count;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write_putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')

		{
			write_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s_count = putss(va_arg(args, char *));
			i++;
			count += (s_count - 1);
		}
		else if (format[i + 1] == '%' && format[i + 1] == '%')
		{
			write_putchar('%');
		}
		count++;
	}
	va_end(args);
	return (count);
}
