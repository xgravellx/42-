/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayilmaz <hayilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:51:21 by hayilmaz          #+#    #+#             */
/*   Updated: 2021/12/07 05:02:14 by hayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_space_neg(char *str, int *ptr)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	*ptr = i;
	return (n);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;

	nb = 0;
	neg = ft_space_neg(str, &i);
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	nb *= neg;
	return (nb);
}
