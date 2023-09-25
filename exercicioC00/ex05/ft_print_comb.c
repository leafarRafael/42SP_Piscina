/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:06:17 by rafael            #+#    #+#             */
/*   Updated: 2023/09/16 18:37:51 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_nbr(char hundred, char ten, char unit)
{
	if (unit > ten && ten > hundred)
	{
		ft_putchar(hundred);
		ft_putchar(ten);
		ft_putchar(unit);
		if (hundred != '7' || ten != '8' || unit != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unit;

	hundred = '0';
	ten = '0';
	unit = '0';
	while (hundred <= '7')
	{
		while (ten <= '9')
		{
			while (unit <= '9')
			{
				ft_print_nbr(hundred, ten, unit);
				unit++;
			}
			ten++;
			unit = '0';
		}
		hundred++;
		ten = '0';
	}
}
