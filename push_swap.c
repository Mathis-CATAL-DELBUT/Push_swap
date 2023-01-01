/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:20:41 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 14:15:02 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *str)
{
	int			i;
	int			neg;
	long int	n;

	i = 0;
	neg = 1;
	n = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (n * neg);
}

t_list	*ft_lst_add(t_list *lst, char *content)
{
	t_list	*nouveau;
	t_list	*temp;

	temp = lst;
	nouveau = malloc(sizeof(t_list));
	nouveau->data = content;
	nouveau->next = NULL;
	if (!lst)
	{
		lst = nouveau;
		return (lst);
	}
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = nouveau;
	return (temp);
}

void	main2(t_list **debut_a, t_list **debut_b, t_data *data)
{
	remplir_tab(debut_a, data);
	pretrie(debut_a, debut_b, data);
	free(data->tab);
	free_list(*debut_a);
	free_list(*debut_b);
}

int	main(int argc, char **argv)
{
	t_data	data;
	t_list	*debut_a;
	t_list	*debut_b;
	int		i;
	int		j;

	i = 1;
	j = 0;
	debut_a = NULL;
	debut_b = NULL;
	if (argc <= 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (check(i, argc, argv, j) == 0)
		return (0);
	i = 1;
	while (i < argc)
	{
		debut_a = ft_lst_add(debut_a, argv[i]);
		i++;
	}
	main2(&debut_a, &debut_b, &data);
}
