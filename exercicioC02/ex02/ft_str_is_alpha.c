/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:57:03 by rafael            #+#    #+#             */
/*   Updated: 2023/09/19 16:20:30 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_is_not_alphabetic(char c)
{
    return ( c < 'a' || c > 'z') &&
            (c < 'A' || c > 'Z');
}

int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_is_not_alphabetic(str[i]))
            return (0);

        i++;
    }

    return (1);
}