/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trifinal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:56:30 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 17:55:08 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nb_put_top(int elmt, t_list **debut_b)
{
	int		i;
	t_list	*temp_debut_b;

	temp_debut_b = *debut_b;
	i = 0;
	while (temp_debut_b && ft_atoi(temp_debut_b->data) != elmt)
	{
		i++;
		temp_debut_b = temp_debut_b->next;
	}
	if (i <= ft_lstsize(*debut_b) - i)
		return (i);
	return (ft_lstsize(*debut_b) - i);
}

void	cout_tri(t_list **debut_b, t_list **debut_a, t_data *data)
{
	int	**tab;
	int	size;

	size = ft_lstsize(*debut_b);
	tab = malloc(sizeof(int *) * size);
	if (!tab)
		return ;
	while (ft_lstsize(*debut_b) > 0)
	{
		size = ft_lstsize(*debut_b);
		cout_tri1(debut_b, debut_a, data, tab);
		cout_tri2(debut_b, debut_a, data, tab);
		ft_free_all_tab(tab, size);
	}
	free(tab);
	put_top_a_whith_majorant(0, data->min, debut_a, debut_b);
}

void	decalage(int i, int j, t_list **debut_a, t_list **debut_b)
{
	if (j <= ft_lstsize(*debut_a) - j)
	{
		while (j-- > 0)
			ra(debut_a, 1);
	}
	else
	{
		while (ft_lstsize(*debut_a) - j++ > 0)
			rra(debut_a, 1);
	}
	if (i <= ft_lstsize(*debut_b) - i)
	{
		while (i-- > 0)
			rb(debut_b, 1);
	}
	else
	{
		while (ft_lstsize(*debut_b) - i++ > 0)
			rrb(debut_b, 1);
	}
	pa(debut_a, debut_b);
}

void	put_top_a_whith_majorant(int elmt, int majorant, t_list **debut_a,
		t_list **debut_b)
{
	int		i;
	int		j;
	t_list	*temp_debut_b;
	t_list	*temp_debut_a;

	temp_debut_b = *debut_b;
	temp_debut_a = *debut_a;
	i = 0;
	j = 0;
	while (temp_debut_b && ft_atoi(temp_debut_b->data) != elmt)
	{
		i++;
		temp_debut_b = temp_debut_b->next;
	}
	while (temp_debut_a && ft_atoi(temp_debut_a->data) != majorant)
	{
		j++;
		temp_debut_a = temp_debut_a->next;
	}
	decalage(i, j, debut_a, debut_b);
}

int	petit_majorant(t_list **debut_a, t_list **debut_b, t_data *data, int elmt)
{
	int		majorant;
	t_list	*temp_debut_a;

	(void)debut_b;
	temp_debut_a = *debut_a;
	majorant = data->tab[data->size - 1];
	while (temp_debut_a)
	{
		if (ft_atoi(temp_debut_a->data) > elmt
			&& ft_atoi(temp_debut_a->data) < majorant)
			majorant = ft_atoi(temp_debut_a->data);
		temp_debut_a = temp_debut_a->next;
	}
	return (majorant);
}
