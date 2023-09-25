/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:53:54 by rafael            #+#    #+#             */
/*   Updated: 2023/09/19 16:55:10 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_upercase(char c)
{
    return ( c < 'A' || c > 'Z');
}

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!ft_is_upercase(str[i]))
            str[i] += 32;
        i++;
    }
    return (str);
}