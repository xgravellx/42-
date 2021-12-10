/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayilmaz <hayilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:07:42 by hayilmaz          #+#    #+#             */
/*   Updated: 2021/11/30 19:07:45 by hayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos_1;
	int	pos_2;
	int	temp;
	int	turns;

	turns = 0;
	while (turns <= size - 1)
	{
		pos_1 = 0;
		while (pos_1 <= size - 2)
		{
			pos_2 = pos_1 + 1;
			if (tab[pos_1] >= tab[pos_2])
			{
				temp = tab[pos_1];
				tab[pos_1] = tab[pos_2];
				tab[pos_2] = temp;
			}
			pos_1++;
		}
		turns++;
	}
}
