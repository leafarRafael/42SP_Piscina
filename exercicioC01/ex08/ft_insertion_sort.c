/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:42:07 by rafael            #+#    #+#             */
/*   Updated: 2023/09/19 12:02:49 by rafael           ###   ########.fr       */
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

void    ft_insertion_sort(int *tab, int size)
{ 

    int *nbr;
    int i;
    int nb;
    int n;

    n=0;
    nbr = malloc(size * sizeof(int));
    i = 0;
    nb = tab[n];

    while (i <= size-1)
    {
        if (tab[i] < tab[i+1])
        {
            nbr[n] = tab[i+1];
            n++;
            i = 0;
        }else 
        {
            n--;
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
    int size;
    size = 16;
    int nbr[16] = {5, 4, 2, 7, 8, 9, 1, 3, 6, 0, 15, 13, 11, 12, 10, 14};

    ft_insertion_sort(nbr, size);
}
