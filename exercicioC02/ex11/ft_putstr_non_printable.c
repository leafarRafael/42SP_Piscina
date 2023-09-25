/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:32:06 by rafael            #+#    #+#             */
/*   Updated: 2023/09/20 10:07:25 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int     is_no_printable(char c)
{
    return (c == '\n' ||
            c == '\a' || 
            c == '\b' ||
            c == '\t' ||
            c == '\f' ||
            c == '\r');
}

void    ft_putstr_non_printable(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (is_no_printable(str[i]))
        {
           ft_putchar('\\');
           ft_putchar('0');
           ft_putchar(str[i] + 87);
           i++;
            
        }
        else
        {
            ft_putchar(str[i]);
            i++;
        }
    }
}