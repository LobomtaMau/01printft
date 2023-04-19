/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:50:46 by mbaptist          #+#    #+#             */
/*   Updated: 2023/04/19 17:33:00 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_convert(va_list va,char *str, long int *len)
{
    unsigned long int arg;

    if (*str == '%')
        ft_putchar_pf(*str, len);
    else if (*str == 'c') //character
        ft_putchar_pf(va_arg(va, int), len);
    else if (*str == 's') //string
        ft_putstr_pf(va_arg(va, char *), len);
    else if (*str == 'd' || *str == 'i') //number e decimais
        ft_putnbr_pf(va_arg(va, int), len);
    else if (*str == 'x' || *str == 'X'); // hexa min and MAX
        ft_puthex_pf(va_arg(va, unsigned int), len);
}

/*
    if (format == 'u') // unsigned int
    if (format == '%%') //?
    if (format == 'p') // pointer
   */ 


int	ft_printf(const char *str, ...)
{
    long int len;
    va_list va;

    if (!str)
        return (0);
    len = 0;
    va_start(va, str);
    while (*str)
    {
        if (*str == '%')
            ft_convert(va, (char *)str, &len);
        else 
           ft_putchar_pf(*str, &len);
        str++;
    }
    va_end(va);
    return (len);
}

#include <stdio.h>

int main(void)
{
    char c = 'A';
    char *str = "hello world";
    int num = 12345;
    unsigned int u_num = 54321;
    unsigned long int hex_num = 0xabcdef;
    
    printf("Original printf():\n");
    printf("Char: %c\n", c);
    printf("String: %s\n", str);
    printf("Decimal: %d\n", num);
    printf("Unsigned decimal: %u\n", u_num);
    printf("Hexadecimal (lowercase): %lx\n", hex_num);
    printf("Hexadecimal (uppercase): %lX\n", hex_num);
    printf("Percent sign: %%\n");

    printf("\nCustom ft_printf():\n");
    ft_printf("Char: %c\n", c);
    ft_printf("String: %s\n", str);
    ft_printf("Decimal: %d\n", num);
    ft_printf("Unsigned decimal: %u\n", u_num);
    ft_printf("Hexadecimal (lowercase): %lx\n", hex_num);
    ft_printf("Hexadecimal (uppercase): %lX\n", hex_num);
    ft_printf("Percent sign: %%\n");

    return (0);
}
