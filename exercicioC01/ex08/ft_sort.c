/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:18:26 by rafael            #+#    #+#             */
/*   Updated: 2023/09/27 10:56:14 by rafael           ###   ########.fr       */
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

void    sort(int *tab, int size)
{
    int j;
    int i;
    int x;
    int troca;
    int newsize;
    int n = 0;

    newsize = size-1;
    troca = 0;
    i = 0;
    j = 0;
    x = size-1;
    while (i <= (size /2) -1)
    {
        while (j <= newsize)
        {
            if (tab[j] > tab[x])
            {
                troca = tab[x];
                tab[x] = tab[j];
                tab[j] = troca;
                n++;
            }
            if (tab[i] > tab[j])
            {
                troca = tab[j];
                tab[j] = tab[i];
                tab[i] = troca;
                n++;
            }
            j++;
        }
        newsize--;
        i++;
        j = i;
        x--;
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

    sort(nbr, 15);
}
