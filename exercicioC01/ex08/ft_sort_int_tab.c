/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:12:18 by rbutzke           #+#    #+#             */
/*   Updated: 2023/09/18 13:27:17 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
void	ft_sort_int_tab(int *tab, int size)
{
	int	current_position;
	int	next_position;
	int	cont_next;
	int	cont;

	cont = 0;
	cont_next = 0;
	while (cont_next < size)
	{
		cont = 0;
		while (cont < size)
		{
			if (tab[cont_next] < tab[cont])
			{
				current_position = tab[cont_next];
				next_position = tab[cont];
				tab[cont_next] = next_position;
				tab[cont] = current_position;
			}
			cont++;
		}
		cont_next++;
	}
}
int main()
{
    int size;
    size = 10;
    int nbr[10];
    nbr[0] = 5;
    nbr[1] = 4;
    nbr[2] = 2;
    nbr[3] = 7;
    nbr[4] = 8;
    nbr[5] = 9;
    nbr[6] = 1;
    nbr[7] = 3;
    nbr[8] = 6;
    nbr[9] = 0;
    ft_sort_int_tab(nbr, size);

	int i;
	i = 0;
	while (i < size){
		ft_putnbr(nbr[i]);
		ft_putchar('\n');
		i++;
	}
}