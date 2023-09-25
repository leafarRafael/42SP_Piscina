/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb._arrey.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:27:38 by rafael            #+#    #+#             */
/*   Updated: 2023/09/17 15:00:21 by rafael           ###   ########.fr       */
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
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

void	ft_print_number(int *number)
{
	if (number[2] > number[1] && number[1] > number[0])
	{
		ft_putnbr(number[0]);
		ft_putnbr(number[1]);
		ft_putnbr(number[2]);
		if (number[0] != 7 || number[1] != 8 || number[2] != 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	number[3];

	number[0] = 0;
	number[1] = 0;
	number[2] = 0;
	while (number[2] <= 9)
	{
		ft_print_number(number);
		if (number[2] == 9)
		{
			number[2] = 0;
			number[1]++;
		}
		if (number[1] == 9)
		{
			number[1] = 0;
			number[0]++;
		}
		if (number[0] == 7)
			break ;
		number[2]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
