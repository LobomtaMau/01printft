/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:58:17 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/20 11:20:46 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned_pf(unsigned int n, long int *len)
{
	if (n >= 10)
		ft_putunsigned_pf(n / 10, len);
	ft_putchar_pf(n % 10 + '0', len);
}
