/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:50:15 by rafael            #+#    #+#             */
/*   Updated: 2023/09/29 08:38:44 by rafael           ###   ########.fr       */
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

void    ft_trade(int *nbr1, int *nbr2)
{
    int aux;

    aux = 0;
    aux = *nbr1;
    *nbr1 = *nbr2;
    *nbr2 = aux;

}

int     ft_partition(int *nbr, int left, int ringht)
{
   int i;
   int pivo;
   int pos;

   i = ringht;
   pivo = nbr[left];
   pos = ringht + 1;

    while (i >= left)
    {
        if (nbr[i] >= pivo)
        {
            pos--;
            ft_trade(&nbr[i], &nbr[pos]);
        }
        i--;
    }

    return (pos);
}

void ft_quick_sort(int *nbr, int letf, int right)
{
    int nb_help;

    nb_help = 0;
    if (letf < right)
    {
        nb_help = ft_partition(nbr, letf, right);
        ft_quick_sort(nbr, letf, nb_help -1);
        ft_quick_sort(nbr, nb_help +1, right);
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

    ft_quick_sort(nbr, 0, 9);
    
	int i;
	i = 0;
	while (i < size){
		ft_putnbr(nbr[i]);
		ft_putchar('\n');
		i++;
	}
}