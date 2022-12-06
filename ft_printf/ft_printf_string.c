#include <ft_printf.h>

int	ft_printf_string(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!str)
		return (ft_printf_string("(null)"));
	while (str[i])
	{
		ft_printf_char(str[i]);
		i++;
		count++;
	}
	return (count);
}
