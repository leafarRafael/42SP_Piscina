/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:20:54 by rafael            #+#    #+#             */
/*   Updated: 2023/09/19 16:21:45 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_not_numeric(char c)
{
    return ( c < '0' || c > '9');
}

int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_is_not_numeric(str[i]))
            return (0);

        i++;
    }

    return (1);
}