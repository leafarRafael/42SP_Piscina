/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:31:06 by rbutzke           #+#    #+#             */
/*   Updated: 2023/08/23 12:11:01 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	old_num;
	int	new_num;
	int	cont;
	int	new_size;

	new_size = size -1;
	cont = 0;
	while(cont < size / 2)
	{
		old_num = tab[new_size];
		new_num = tab[cont];
		tab[cont] = old_num;
		tab[new_size] = new_num;
		cont++;
		new_size--;
	}
}
