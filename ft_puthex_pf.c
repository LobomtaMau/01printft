/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:00:17 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/19 17:28:15 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_puthex_pf(unsigned int n, int is_upper,long int *len)
{
    char *hex_chars;

    if (is_upper)
        hex_chars = HEX_UPP;
    else
        hex_chars = HEX_LOW;
    if (n >= 16)
        ft_puthex_pf(n / 16, is_upper, len);
    ft_putchar_pf(hex_chars[n % 16], len);
}
