/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:46:17 by rafael            #+#    #+#             */
/*   Updated: 2023/09/19 16:53:19 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_lowercase(char c)
{
    return ( c < 'a' || c > 'z');
}

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!ft_is_lowercase(str[i]))
        {
            str[i] -= 32;
        }
        i++;
    }

    return (str);
}