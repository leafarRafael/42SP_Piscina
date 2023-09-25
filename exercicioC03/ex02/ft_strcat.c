/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:35:14 by rafael            #+#    #+#             */
/*   Updated: 2023/09/20 10:55:33 by rafael           ###   ########.fr       */
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

char    *ft_strcat(char *dest, char *src)
{
    int     i;
    int     strlen;

    strlen = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0')
    {
        dest[strlen] = src[i];
        strlen++;
        i++;
    }
    dest[strlen] = '\0';
    return (dest);
}