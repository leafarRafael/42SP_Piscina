/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 07:55:19 by rafael            #+#    #+#             */
/*   Updated: 2023/09/26 11:52:01 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) < 0)
		{
			return (-1);
			break ;
		}
		else if ((s1[i] - s2[i]) > 0)
			return (1);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_input(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}

void	ft_bubble(int argc, char **argv)
{
	int		i;
	int		j;
	char	*troca;

	i = 1;
	j = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				troca = argv[i];
				argv[i] = argv[j];
				argv[j] = troca;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	ft_bubble(argc, argv);
	ft_print_input(argc, argv);
	return (0);
}
