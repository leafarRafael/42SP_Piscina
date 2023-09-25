/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:01:43 by rafael            #+#    #+#             */
/*   Updated: 2023/09/16 12:15:51 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = (long)nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr < 10)
		ft_putchar(nbr + '0');
	if (nbr > 9)
	{
		ft_putnbr (nbr / 10);
		ft_putnbr (nbr % 10);
	}
}

void	print_nbr(int i, int j)
{
	if (j < 10)
		ft_putnbr(0);
	ft_putnbr(j);
	ft_putchar(' ');
	if (i < 10)
		ft_putnbr(0);
	ft_putnbr(i);
	if (j != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 1;
	j = 0;
	while (count < 100)
	{
		if (i > j)
			print_nbr(i, j);
		if (i == 99)
		{
			j++;
			i = 0;
			count = 0;
		}
		if (j == 99)
		{
			break ;
		}
		i++;
		count++;
	}
}
