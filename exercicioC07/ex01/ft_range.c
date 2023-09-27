/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:26:07 by rafael            #+#    #+#             */
/*   Updated: 2023/09/26 14:30:45 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*nbr_arrey;

	if (min > max)
		return (NULL);
	size = max - min;
	nbr_arrey = malloc((size +2) * sizeof(int));
	i = 0;
	while (min < max)
	{
		nbr_arrey[i] = min;
		min++;
		i++;
	}
	return (nbr_arrey);
}
