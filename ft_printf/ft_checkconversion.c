#include <ft_printf.h>

char	ft_checkconversion(char var)
{
	char	*conversion;
	int	i;

	i = 0;
	conversion = "cspdiuxX%";
	while (conversion[i])
	{
		if (var == conversion[i])
			return (conversion[i]);
		i++;
	}
	return (0);
}
