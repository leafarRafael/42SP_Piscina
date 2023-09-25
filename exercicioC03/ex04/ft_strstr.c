/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:05:21 by rafael            #+#    #+#             */
/*   Updated: 2023/09/20 13:45:05 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int     ft_strlen(char *s)
{
    int     i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strstr(char *str, char *to_find)
{
    int     i;
    int     j;
    int     x;

    j = ft_strlen(to_find);
    x = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == to_find[x])
        {
            x++;
        }
        else
            x = 0;
        if (x == j)
            break;
        i++;
    }
    i -=x-1;
    return (&str[i]);
}