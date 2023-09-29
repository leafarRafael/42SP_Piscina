/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:31:32 by rafael            #+#    #+#             */
/*   Updated: 2023/09/27 09:50:57 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_merge(int *nbr, int inicio, int meio, int fim);

void ft_merge_sort(int *nbr, int inicio, int fim);

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

void ft_merge(int *nbr, int inicio, int meio, int fim)
{
    int *nb;
    int i;
    int j;
    int k;

    nb = malloc ((inicio+meio+fim+1) * sizeof(int));
    i = 0;
    while (i <= fim)
    {
        nb[i] = nbr[i];
        i++;
    }

    i = inicio;
    j = meio +1;
    k = inicio;
    while (i <= meio && j <= fim)
    {
        if (nb[i] <= nb[j])
        {
            nbr[k] = nb[i];
            i++;
        }
        else
        {
            nbr[k] = nb[j];
            j++;
        }
        k++;
    }
    while (i <= meio)
    {
        nbr[k] = nb[i];
        i++;
        k++;
    }
    while (j <= fim)
    {
        nbr[k] = nb[j];
        j++;
        k++;
    }
}

void ft_merge_sort(int *nbr, int inicio, int fim)
{
    int meio;

    if (inicio >= fim)
        return ;
    else
    {
        meio = (inicio + fim)/2;
        ft_merge_sort(nbr, inicio, meio);
        ft_merge_sort(nbr, meio+1, fim);
        ft_merge(nbr, inicio, meio, fim);
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

    ft_merge_sort(nbr, 0, 9);
    
	int i;
	i = 0;
	while (i < size){
		ft_putnbr(nbr[i]);
		ft_putchar('\n');
		i++;
	}
}