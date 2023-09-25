/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:00:44 by rafael            #+#    #+#             */
/*   Updated: 2023/09/22 14:52:31 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_is_space(char c)
{
    return (c == ' ' ||
            c == '\n' ||
            c == '\f' ||
            c == '\r' ||
            c == '\t' ||
            c == '\v');
}

int     ft_is_numeric(char c)
{
    return (c < '0' || c > '9');
}

int     ft_is_signs(char c)
{
    return (c == '-' || c == '+');
}

int     ft_atoi(char *str)
{
    int i;
    int nbr;
    int s;

    i = 0;
    s = 0;
    nbr = 0;
    while (ft_is_space(str[i]))
        i++;
    while (ft_is_signs(str[i]))
    {
        if (str[i] == '-')
            s++;
        if(!ft_is_signs(str[i]))
            break;
        i++;
    }
    if (ft_is_numeric(str[i+1]))
        return (0);
    while (str[i] != '\0')
    {
        if (!ft_is_numeric(str[i]))
        {
            nbr = (nbr * 10) + (str[i] -'0');
            if (ft_is_numeric(str[i+1]))
                break;
        }
        i++;
    }
    if (s % 2 != 0)
        return (-nbr);
    return (nbr);
}