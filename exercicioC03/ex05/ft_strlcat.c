/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:13:27 by rafael            #+#    #+#             */
/*   Updated: 2023/09/20 13:45:02 by rafael           ###   ########.fr       */
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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int size_src;

    size_src = ft_strlen(src);
    i = 0;
    while (src[i] != '\0' && i < size-1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (size_src);
}