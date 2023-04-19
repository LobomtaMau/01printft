/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:07:06 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/19 16:07:06 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_pf(int n, long int *len)
{
	if (n == -2147483648)
	{
		ft_putstr_pf("-2147483648", len);
	}
	else if (n < 0)
	{
		ft_putchar_pf('-', len);
		ft_putnbr_pf(-n, len);
	}
	else if (n > 9)
	{
		ft_putnbr_pf(n / 10, len);
		ft_putchar_pf(n % 10 + '0', len);
	}
}