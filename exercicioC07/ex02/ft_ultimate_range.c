/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:31:12 by rafael            #+#    #+#             */
/*   Updated: 2023/09/27 07:51:14 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*nbr;
	int	i;

	size = (max - min);
	nbr = malloc((size +2) * sizeof(int));
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	while (min < max)
	{
		nbr[i] = min;
		min++;
		i++;
	}
	*range = nbr;
	return (size);
}
