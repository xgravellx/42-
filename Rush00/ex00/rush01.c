/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayilmaz <hayilmaz@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:29:07 by hayilmaz          #+#    #+#             */
/*   Updated: 2021/11/28 18:29:13 by hayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int column, char first_char, char middle_char, char last_char)
{
	int	count;

	count = 1;
	while (count <= column)
	{
		if (count == 1)
			ft_putchar(first_char);
		else if (count == column)
			ft_putchar(last_char);
		else
			ft_putchar(middle_char);
		count++;
	}
	ft_putchar('\n');
}

void	rush( int x, int y)
{
	char	count;

	count = 1;
	if (x >= 1 && y >= 1)
	{
		while (count <= y)
		{
			if (count == 1)
				ft_print(x, '/', '*', '\\');
			else if (count == y)
				ft_print(x, '\\', '*', '/');
			else
				ft_print(x, '*', ' ', '*');
			count++;
		}
	}
}
