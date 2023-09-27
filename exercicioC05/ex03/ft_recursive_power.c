/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:36:14 by rafael            #+#    #+#             */
/*   Updated: 2023/09/25 11:53:08 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb <= 0 && power <= 0)
		return (1);
	if (power <= 2)
		return (nb * nb);
	return (nb *= ft_recursive_power(nb, power -1));
}
