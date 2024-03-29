/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:42:07 by rafael            #+#    #+#             */
/*   Updated: 2023/09/28 11:33:06 by rafael           ###   ########.fr       */
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

void    ft_insertion_sort(int *tab, int size)
{ 
    int i;
    int j;
    int nb;

    i = 0;
    j = 0;
    nb = 0;
    while (i < size-1)
    {
        if (tab[i] > tab[i+1])
        {
            nb = tab[i+1];
            tab[i+1] = tab[i];
            tab[i] = nb;
            j = i -1;
            while (j >= 0)
            {
                if (nb < tab[j])
                {
                    tab[j+1] = tab[j];
                    tab[j] = nb;
                }
                else
                    break ;
                j = j -1;
            }
        }
        i++;
    }
    i = 0;
    while (i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar('\n');
        i++;
    }
}

int main()
{
    int nbr[16] = {5, 4, 2, 7, 8, 9, 1, 3, 6, 0, 15, 13, 11, 12, 10, 14};

    ft_insertion_sort(nbr, 15);
}
