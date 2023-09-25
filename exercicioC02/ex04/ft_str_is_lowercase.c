/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:25:17 by rafael            #+#    #+#             */
/*   Updated: 2023/09/19 16:42:19 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_not_lowercase(char c)
{
    return ( c < 'a' || c > 'z');
}

int     ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_is_not_lowercase(str[i]))
            return (0);

        i++;
    }

    return (1);
}