/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:07:43 by rafael            #+#    #+#             */
/*   Updated: 2023/09/27 08:02:06 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_sizes(char **strs, char *sep, int size)
{
	int	i;
	int	sizes;

	sizes = 0;
	i = 0;
	while (i < size)
		sizes += ft_strlen(strs[i++]);
	i = 0;
	while (i++ < size)
		sizes += ft_strlen(sep);
	return (sizes);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	int		sizes;
	char	*conc;

	sizes = ft_sizes(strs, sep, size);
	conc = malloc((sizes) * sizeof(char));
	i = 0;
	j = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			conc[x++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0')
			conc[x++] = sep[j++];
		i++;
	}
	conc[x] = '\0';
	return (conc);
}
