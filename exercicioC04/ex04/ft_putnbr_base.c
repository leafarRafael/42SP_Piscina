/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:18:02 by rafael            #+#    #+#             */
/*   Updated: 2023/09/22 12:51:51 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_checks_base(char *s1)
{
	int	i;
	int	j;
	int	equal;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		equal = -1;
		j = 0;
		while (s1[j] != '\0')
		{
			if (s1[i] == s1[j])
				equal++;
			if (equal > 0 || equal > 0 || (s1[j] == '-' || s1[j] == '+'))
			{
				return (1);
				break ;
			}
			j++;
		}
		i++;
	}
	return (equal);
}

void	convert(int length, long nbr, char *base)
{
	char	conv[25];
	int		i;
	int		mod;

	if (nbr == 0)
		write (1, "0", 1);
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
	}
	mod = 0;
	i = 0;
	while (nbr != 0)
	{
		mod = nbr % length;
		conv[i++] = base[mod];
		nbr = nbr / length;
	}
	conv[i] = '\0';
	while (i-- >= 0)
		write (1, &conv[i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			j;
	int			length;

	length = 0;
	j = ft_checks_base(base);
	nb = (long) nbr;
	while (base[length] != '\0')
		length++;
	if (length > 1)
		if (j == 0)
			convert(length, nb, base);
}
