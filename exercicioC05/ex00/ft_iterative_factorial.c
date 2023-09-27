/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:16:45 by rafael            #+#    #+#             */
/*   Updated: 2023/09/25 09:38:41 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fatorial;

	if (nb == 0)
		return (1);
	i = nb -1;
	fatorial = nb;
	while (i-- > 0)
		fatorial += fatorial * i;
	return (fatorial);
}
