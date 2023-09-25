/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:57:45 by rafael            #+#    #+#             */
/*   Updated: 2023/09/20 07:54:46 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_is_not_lowercase(char c)
{
    return ( c < 'a' || c > 'z');
}

int     ft_is_not_numeric(char c)
{
    return ( c < '0' || c > '9');
}

int     ft_is_upercase(char c)
{
    return ( c < 'A' || c > 'Z');
}

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!ft_is_upercase(str[i]))
            str[i] += 32;
        i++;
    }
    return (str);
}

char    *ft_strcapitalize(char *str)
{
    int     i;

    i = 0;

    ft_strlowcase(str);

    while (str[i] != '\0')
    {
        if (ft_is_not_numeric(str[i]))
        {
            if (str[0] >= 'a' && str[0]  <= 'z')
            {
                str[0] -= 32;
            }

            if (str[i-1] == ' ' || str[i-1] == '-' || str[i-1] == '+' && !ft_is_not_lowercase(str[i]))
            {
                str[i] -=32;
            }
        }
        i++;
    }

    return (str);
}