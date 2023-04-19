/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:14:01 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/19 17:02:35 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *s, long int *len)
{
	if (!s)
		s = "(NULL)";
	while (*s)
	{
		ft_putstr_pf(*s, len);
		s++;
	}
}