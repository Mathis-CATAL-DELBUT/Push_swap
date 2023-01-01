/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretrie.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 14:02:52 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 18:00:02 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	est_trie(t_list **debut_a)
{
	t_list	*temp_debut_a;
	int		valeur;

	temp_debut_a = *debut_a;
	valeur = ft_atoi(temp_debut_a->data);
	temp_debut_a = temp_debut_a->next;
	while (temp_debut_a)
	{
		if (valeur > ft_atoi(temp_debut_a->data))
			return (0);
		valeur = ft_atoi(temp_debut_a->data);
		temp_debut_a = temp_debut_a->next;
	}
	return (1);
}

void	pretrie(t_list **debut_a, t_list **debut_b, t_data *data)
{
	if (ft_lstsize(*debut_a) == 1 || est_trie(debut_a) == 1)
		return ;
	while (ft_lstsize(*debut_a) > 1)
	{
		if (ft_atoi((*debut_a)->data) == data->max)
			ra(debut_a, 1);
		pb(debut_a, debut_b);
		if (ft_atoi((*debut_b)->data) < data->mediane)
			rb(debut_b, 1);
	}
	cout_tri(debut_b, debut_a, data);
}
