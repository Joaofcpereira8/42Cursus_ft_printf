#include <ft_printf.h>

int	ft_printf_unsigned(unsigned int num)
{
	int	count;

	count = 0;
	if (num < 10)
	{
		count += ft_print_char(num + '0');
	}
	else
	{
		count += ft_printf_digit(num / 10);
		count += ft_printf_digit(num % 10);
	}
	return (count);
}
