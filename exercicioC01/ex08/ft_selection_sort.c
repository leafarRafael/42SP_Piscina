/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:06:32 by rafael            #+#    #+#             */
/*   Updated: 2023/09/19 10:49:14 by rafael           ###   ########.fr       */
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

void    ft_selection_sort(int *tab, int size)
{
    int i;
    int j;
    int sort;

    sort = 0;
    i = 0;
    j = 0;
    while (i <= size-1)
    {
        while (j <= size-1)
        {
            if (tab[i] < tab[j])
            {
                sort = tab[i];
                tab[i] = tab[j];
                tab[j] = sort;
            }
            j++;
        }
        j = 0;
        i++;
    }
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
    ft_selection_sort(nbr, size);

}
