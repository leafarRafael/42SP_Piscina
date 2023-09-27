/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:19:09 by rafael            #+#    #+#             */
/*   Updated: 2023/09/25 11:35:32 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n_power;

	if (power <= 0)
		return (0);
	i = power -1;
	n_power = nb;
	while (i-- > 0)
		n_power *= nb;
	return (n_power);
}
