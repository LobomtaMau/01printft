/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:34:02 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/21 17:27:58 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(unsigned long int ptr, long int *len)
{
	if (!ptr)
	{
		ft_putstr_pf("(nil)", len);
		return ;
	}
	if (ptr < 16)
	{
		ft_putstr_pf("0x", len);
		ft_putchar_pf(HEX_LOW[ptr % 16], len);
		return ;
	}
	ft_putptr_pf(ptr / 16, len);
	ft_putchar_pf(HEX_LOW[ptr % 16], len);
}

/*
void	ft_putptr_pf(void *ptr, long int *len)
{
	unsigned long int	ptr_val;

	ptr_val = (unsigned long int)ptr;
	if (!ptr)
	{
		ft_putstr_pf("(nil)", len);
		return ;
	}
	ft_putstr_pf("0x", len);
	if (ptr_val == 0)
	{
		ft_putchar_pf('0', len);
		return ;
	}
	ft_puthex_pf(ptr_val, 0, len);
}

void	ft_putptr_pf(void *ptr, long int *len)
{
	unsigned long int	ptr_val;

	ptr_val = (unsigned long int)ptr;
	if (!ptr)
		return (ft_putstr_pf("(nil)", len));
	if (ptr_val >= 16)
	{
		ft_putstr_pf("0x", len);
		ft_putchar_pf(HEX_LOW[ptr_val % 16], len);
		return ;
	}
	ft_putptr_pf((void *)(ptr_val / 16), len);
	ft_putchar_pf(HEX_LOW[ptr_val % 16], len);
}

void	ft_putptr_pf(unsigned long int ptr, long int *len)
{
	ft_putstr_pf("0x", len);
	if (!ptr)
		ft_putstr_pf("0", len);
	else
		ft_puthex_pf(ptr, 0, len);
}

void	ft_putptr_pf(unsigned long int ptr, long int *len)
{
	if (!ptr)
		return (ft_putstr_pf("(nil)", len));
	if (ptr >= 16)
	{
		ft_putstr_pf("0x", len);
		ft_putchar_pf(HEX_LOW[ptr % 16], len);
		return ;
	}
	ft_putptr_pf(ptr / 16, len);
	ft_putchar_pf(HEX_LOW[ptr % 16], len);
}


void	ft_putptr_pf(void *ptr, long int *len)
{
	char				*hex_c;
	unsigned long adress;

	if (!ptr)
		return (ft_putstr_pf("(nil)", len));
	if (ptr !=0 )
	ft_putstr_pf("Ox", len);
	hex_c = hex_c + HEX_LOW;
	ft_putstr_pf(hex_c, len);
}*/