/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:57:58 by rafael            #+#    #+#             */
/*   Updated: 2023/09/26 12:19:55 by rafael           ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*string;

	size = ft_strlen(src) +1;
	string = malloc((size) * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		string[i] = src[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
