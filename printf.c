#include "holberton.h"

/**
 * _printf - prints a formatted string
 * @format: string with desired characters
 * Return: printed characters
 *
 */

int _printf(const char *format, ...)
{
  int printed_chars;
  convert_t f_list[] = {
			{"c", print_char},
			{"s", print_string},
			{"%", print_percent},
			{"d", print_integer},
			{"i", print_integer},
			{NULL, NULL}
  };
  va_list arg_list;

  if (format == NULL)
    return (-1);

  return (printed_chars);

  va_start(arg_list, format);

  /* call the parser function*/
  printed_chars = parser(format, f_list, arg_list);
  va_end(arg_list);
  return (printed_chars);
}
