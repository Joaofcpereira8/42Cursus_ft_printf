/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:29:24 by jofilipe          #+#    #+#             */
/*   Updated: 2022/12/07 15:49:59 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printf_unsigned(unsigned int num);
int		ft_printf_string(char *str);
int		ft_printf_digit(long num);
int		ft_printf_char(char c);
char	ft_checkconversion(char var);
int		ft_printf_hexa(unsigned long hexa, char c);
int		ft_printf_pointer(unsigned long num);

#endif
