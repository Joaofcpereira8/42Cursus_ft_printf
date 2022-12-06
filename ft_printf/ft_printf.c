#include <ft_printf.h>

int	ft_checkprintf(char specifier, va_list var)
{
	int	bytes;

	bytes = 0;
	if (specifier == '%')
		bytes = ft_printf_char('%');
	else if (specifier == 'c')
		bytes = ft_printf_char(va_arg(var, int));
	else if (specifier == 's')
		bytes = ft_printf_string(va_arg(var, char *));
	else if (specifier == 'i' || specifier == 'd')
		bytes = ft_printf_digit(va_arg(var, int));
	else if (specifier == 'u')
		bytes = ft_printf_unsigned(va_arg(var, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		bytes = ft_printf_hexa(va_arg(var, unsigned int), specifier); //???????
	else if (specifier == 'p')
		bytes = ft_printf_pointer(va_arg(var, unsigned long)); //?????
	return (bytes);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	count;
	va_list var;

	va_start (var, str);
	int	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_checkconversion(str[i] + 1))
		{
			count += ft_checkprintf(str[i] + 1, var);
			i++;
		}
		else if (str[i] == '%' && !ft_checkconversion(str[i] + 1))
		{
			write(1, "es um burro do crl", 19);
			return (count);
		}
		else
		{
			write(1, str[i], 1);
			count++;
		}
		i++;
	}
	va_end(var);
	return (count);
}
