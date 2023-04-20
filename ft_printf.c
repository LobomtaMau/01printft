/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:50:46 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/20 15:10:26 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(va_list va, char *str, long int *len)
{
	if (*str == '%')
		ft_putchar_pf(*str, len);
	else if (*str == 'c')
		ft_putchar_pf(va_arg(va, int), len);
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *), len);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_pf(va_arg(va, int), len);
	else if (*str == 'x')
		ft_puthex_pf(va_arg(va, unsigned int), 0, len);
	else if (*str == 'X')
		ft_puthex_pf(va_arg(va, unsigned int), 1, len);
	else if (*str == 'u')
		ft_putunsigned_pf(va_arg(va, unsigned int), len);
	else if (*str == 'p')
		ft_putptr_pf((unsigned long int)va_arg(va, void *), len);
}

int	ft_printf(const char *str, ...)
{
	long int	len;
	va_list		va;

	if (!str)
		return (0);
	len = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_convert(va, (char *)str, &len);
		}
		else
			ft_putchar_pf(*str, &len);
		str++;
	}
	va_end(va);
	return (len);
}
