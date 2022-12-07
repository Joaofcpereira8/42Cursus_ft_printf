/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:19:59 by jofilipe          #+#    #+#             */
/*   Updated: 2022/12/07 15:20:46 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	main()
{
	char	str[] = "-";
	int	i;

	//i = printf("%s", str);
	//printf("%d\n", i);
	i = ft_printf(" %s ", str);
	printf("%d\n", i);
	return (0);
}
