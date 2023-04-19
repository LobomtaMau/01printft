/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:03:52 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/19 17:27:24 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define CONV_SPEC "cspdiuxX"
# define HEX_LOW "0123456789abcdef"
# define HEX_UPP "0123456789ABCDEF"

int     ft_printf(const char *str, ...);

void	ft_putchar_pf(char c, long int *len);
void	ft_putstr_pf(char *s, long int *len);
void    ft_putnbr_pf(int n, long int *len);
void	ft_putunint_pf(unsigned int n, long int *len);
void    ft_puthex_pf(unsigned int n, int is_upper,long int *len);

#endif