/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:06:32 by rafael            #+#    #+#             */
/*   Updated: 2023/09/27 15:21:44 by rafael           ###   ########.fr       */
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

void    ft_selection_sort(int *tab, int size)
{
    int i;
    int j;
    int nb;
    int trocas;


    i = 0;
    trocas = 0;
    j = 1;
    while (i < size)
    {
        j = i+1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                nb = tab[i];
                tab[i] = tab[j];
                tab[j]= nb;
                trocas++;
            }
            j++;
        }
        i++;
    }

    printf("trocas = %d\n\n", trocas);
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
    size = 15;
    int nbr[16] = {5, 4, 2, 7, 8, 9, 1, 3, 6, 0, 15, 13, 11, 12, 10, 14};
    ft_selection_sort(nbr, size);

}
