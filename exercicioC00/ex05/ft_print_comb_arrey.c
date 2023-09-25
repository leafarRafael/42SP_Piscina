/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_arrey.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:27:38 by rafael            #+#    #+#             */
/*   Updated: 2023/09/16 19:24:24 by rafael           ###   ########.fr       */
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

int main()
{
    int   number[3];

    number[0] = 0;
    number[1] = 0;
    number[2] = 0;
    while (number[0] < 7)
    {
        while (number[1] <= 9)
        {
            while (number[2] <=9)
            {
                if (number[0] < number[1]  && number[1] < number[2])
                {
                    ft_putnbr(number[0]);
                    ft_putnbr(number[1]);
                    ft_putnbr(number[2]);
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                number[2]++;
            }
            number[2] = 0;
            number[1]++;
        }
        number[1] = 0;
        number[0]++;
    }



}