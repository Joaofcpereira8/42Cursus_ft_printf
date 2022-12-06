#include <ft_printf.h>

int	ft_printf_digit(int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		num *= -1;
		count += ft_printf_char('-');
	}
	if (num < 10)
		count += ft_printf_char(num + '0');
	else
	{
		count += ft_printf_digit(num / 10);
		count += ft_printf_digit(num % 10);
	}
	return (count);
}
