/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:21:35 by jofilipe          #+#    #+#             */
/*   Updated: 2022/12/02 11:45:53 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void	ft_printf_char(char c)
{
	write (1, &c, 1);
}

void	ft_printf_string(char *str)
{
	int	i;

	i = 0;
	while(*(str + i))
	{
		write(1, (str + i), 1);
		i++;
	}
}

int	checkconversion(char str)
{
	int	i;
	char	*conversions;

	i = 0;
	conversions = "cspdiuxX%";
	while (*(conversions + i))
	{
		if (str == *(conversions + i))
			return (*(conversions + i));
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	va_list	tmp;
	char conversion;

	va_start(tmp, str);
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == '%')
		{
			i++;
			if (checkconversion(*(str + i)))
			{
				conversion = checkconversion(*(str + i));
				if (conversion == '%')
					write (1, "%", 1);
				else if (conversion == 'c')
					ft_printf_char(va_arg(tmp, char *));
				else if (conversion == 's')
					ft_printf_string(va_arg(tmp, char *));
			}
		}
		write(1, (str + i++), 1);
	}
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_printf(*(argv + 1), *(argv + 2));
	write(1, "\n", 1);
	return (0);
}
