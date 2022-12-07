/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:28:55 by jofilipe          #+#    #+#             */
/*   Updated: 2022/12/07 14:22:21 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_digit(long num)
{
	int	count;

	count = 0;
	if (num <= -2147483648)
		return(write(1, "-2147483648", 11));
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
