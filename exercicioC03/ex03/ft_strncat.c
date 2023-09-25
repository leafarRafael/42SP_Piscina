/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:54:44 by rafael            #+#    #+#             */
/*   Updated: 2023/09/20 11:04:54 by rafael           ###   ########.fr       */
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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int     i;
    unsigned int     strlen;

    strlen = ft_strlen(dest);
    i = 0;
    while (src[i] != '\0' || i < nb)
    {
        dest[strlen + i] = src[i];
        i++;
    }
    dest[strlen+i] = '\0';
    return (dest);
}