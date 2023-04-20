/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:34:02 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/20 14:49:41 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex_ptr_pf(unsigned long int n, char *hex_c, long int *len)
{
	if (n >= 16)
		ft_puthex_ptr_pf(n / 16, hex_c, len);
	ft_putchar_pf(hex_c[n % 16], len);
}

void	ft_putptr_pf(unsigned long int ptr, long int *len)
{
	char	*hex_c;

	hex_c = HEX_LOW;
	ft_putstr_pf("Ox", len);
	if (ptr == 0)
		ft_putchar_pf('O', len);
	else
		ft_puthex_ptr_pf(ptr, hex_c, len);
}
