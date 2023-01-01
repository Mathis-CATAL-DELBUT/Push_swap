/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:17:10 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 13:18:45 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_int(char *str, char **argv, int j)
{
	int			i;
	long int	nbr;

	i = 0;
	nbr = ft_atoi(str);
	if (nbr < 0)
		i = 1;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	if (nbr < -2147483648 || nbr > 2147483647 || i == 0)
		return (0);
	i = 1;
	while (argv[i] && i <= j)
	{
		if (ft_atoi(argv[i]) == ft_atoi(str))
			return (0);
		i++;
	}
	return (1);
}

int	check(int i, int argc, char **argv, int j)
{
	while (i < argc)
	{
		if (check_int(argv[i], argv, j) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
		j++;
	}
	return (1);
}
