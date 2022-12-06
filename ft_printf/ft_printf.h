#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_printf_unsigned(unsigned int num);
int		ft_printf_string(char *str);
int		ft_printf_digit(int num);
int		ft_printf_char(char c);
char	ft_checkconversion(char var);

#endif
