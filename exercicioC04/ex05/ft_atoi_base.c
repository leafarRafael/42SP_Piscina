/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:29:15 by rafael            #+#    #+#             */
/*   Updated: 2023/09/24 15:07:59 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checks_base(char *s1)
{
	int	i;
	int	j;
	int	equal;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		equal = -1;
		j = 0;
		while (s1[j++] != '\0')
		{
			if (s1[i] == s1[j])
				equal++;
			if (equal > 0 || (s1[j] == '-' || s1[j] == '+'))
			{
				return (1);
				break ;
			}
		}
		i++;
	}
	return (equal);
}

int	ft_power(int num, int p)
{
	int	i;
	int	m;

	i = 1;
	m = num;
	if (p <= 0)
		return (1);
	while (i++ < p)
		m *= num;
	return (m);
}

int	ft_strstr(char *str, char to_find, int n)
{
	int	i;
	int	j;

	j = -1;
	i = 0;
	while (str[i++] != '\0')
	{
		if (str[i] == to_find)
		{
			j++;
			break ;
		}
	}
	if (n == 1)
		return (j);
	return (i);
}

int	convert(char *str, char *base)
{
	int	power_str;
	int	base_size;
	int	num;
	int	num_2;
	int	i;

	if (ft_checks_base(base) != 0)
		return (0);
	i = 0;
	while (str[i++] != '\0')
		power_str = i -1;
	i = 0;
	while (base[i++] != '\0')
		base_size = i;
	i = 0;
	num_2 = 0;
	num = 0;
	while (power_str >= 0)
	{
		num_2 = ft_strstr(base, str[power_str--], 0);
		num += num_2 * ft_power(base_size, i++);
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	char	c[20];
	int		i[4];

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	i[3] = 0;
	while (str[i[0]] == ' ' || str[i[0]] == '\n' || str[i[0]] == '\f' 
		|| str[i[0]] == '\r' || str[i[0]] == '\t' || str[i[0]] == '\v'
		|| str[i[0]] == '-' || str[i[0]] == '+')
	{
		if (str[i[0]] == '-')
			i[2]++;
		i[0]++;
	}
	if (ft_strstr(base, str[i[0]], 1) == -1)
		return (0);
	while (str[i[0]] != '\0')
	{
		if (ft_strstr(base, str[i[0]], 1) != -1)
			c[i[3]++] = str[i[0]];
		i[0]++;
	}
	c[i[3]] = '\0';
	i[1] = convert(c, base);
	if (i[2] % 2 != 0)
		return (-i[1]);
	return (i[1]);
}
