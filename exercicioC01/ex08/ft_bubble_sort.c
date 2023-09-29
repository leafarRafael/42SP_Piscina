/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:02:29 by rafael            #+#    #+#             */
/*   Updated: 2023/09/28 10:23:30 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

void	ft_bubble_sort_int_tab(int *tab, int size)
{
	int	current_position;
	int	next_position;
	int	j;
	int	i;
	int troca = 0;

	i = 0;
	j = 0;
	while (j < size)
	{
		i = j;

		while (i < size)
		{
			if (tab[j] > tab[i])
			{
				current_position = tab[j];
				next_position = tab[i];
				tab[j] = next_position;
				tab[i] = current_position;
				troca++;
			}
			i++;
		}
		j++;
	}
    printf("\n\nnumero de trocas[%d]\n", troca);
	 i = 0;
    while(i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar('\n');
        i++;
    }
}

int main()
{
    int size;
    size = 10;
    int nbr[16] = {5, 4, 2, 7, 8, 9, 1, 3, 6, 0, 15, 13, 11, 12, 10, 14};

    ft_bubble_sort_int_tab(nbr, 15);
}
