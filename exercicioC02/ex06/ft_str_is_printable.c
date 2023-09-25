/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:36:17 by rafael            #+#    #+#             */
/*   Updated: 2023/09/19 16:45:02 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_is_not_printable(char c)
{
    return (c < 32 || c > 127);
}


int ft_str_is_printable(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_is_not_printable(str[i]))
            return (0);
        i++;
    }

    return (1);
}