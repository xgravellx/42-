/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayilmaz <hayilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:07:10 by hayilmaz          #+#    #+#             */
/*   Updated: 2021/11/30 14:07:29 by hayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	pos;
	int	turns;

	temp = 0;
	pos = 0;
	turns = size / 2;
	while (turns > 0)
	{
		temp = tab[pos];
		tab[pos] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		pos++;
		turns--;
	}
}
