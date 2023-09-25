/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:29:10 by rafael            #+#    #+#             */
/*   Updated: 2023/09/19 16:42:14 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_not_upercase(char c)
{
    return (c < 'A' || c > 'Z');
}

int     ft_str_is_uppercase(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_is_not_upercase(str[i]))
            return (0);
        i++;
    }

    return (1);
}