/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:50:46 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/21 12:16:49 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(char str, va_list va, long int *len)
{
	if (str == '%')
		ft_putchar_pf(str, len);
	else if (str == 'c')
		ft_putchar_pf(va_arg(va, int), len);
	else if (str == 's')
		ft_putstr_pf(va_arg(va, char *), len);
	else if (str == 'd' || str == 'i')
		ft_putnbr_pf(va_arg(va, int), len);
	else if (str == 'x')
		ft_puthex_pf(va_arg(va, unsigned int), 0, len);
	else if (str == 'X')
		ft_puthex_pf(va_arg(va, unsigned int), 1, len);
	else if (str == 'u')
		ft_putunsigned_pf(va_arg(va, unsigned int), len);
	else if (str == 'p')
		ft_putptr_pf(va_arg(va, unsigned long int), len);
}

int	ft_printf(const char *str, ...)
{
	long int		len;
	va_list			va;
	unsigned int	i;

	len = 0;
	i = 0;
	va_start(va, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_convert(str[++i], va, &len);
		}
		else
			ft_putchar_pf(str[i], &len);
		i++;
	}
	va_end(va);
	return (len);
}
