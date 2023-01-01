/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:30:21 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 10:44:23 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **debut_a, int testeur)
{
	t_list	*temp_decalage;
	t_list	*temp_debut_a;

	if (!*debut_a || !(*debut_a)->next)
		return ;
	temp_decalage = *debut_a;
	temp_debut_a = *debut_a;
	while (temp_decalage->next != NULL)
		temp_decalage = temp_decalage->next;
	*debut_a = temp_decalage;
	(*debut_a)->next = temp_debut_a;
	while (temp_debut_a->next != *debut_a)
		temp_debut_a = temp_debut_a->next;
	temp_debut_a->next = NULL;
	if (testeur == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_list **debut_b, int testeur)
{
	t_list	*temp_decalage;
	t_list	*temp_debut_b;

	if (!*debut_b || !(*debut_b)->next)
		return ;
	temp_decalage = *debut_b;
	temp_debut_b = *debut_b;
	while (temp_decalage->next != NULL)
		temp_decalage = temp_decalage->next;
	*debut_b = temp_decalage;
	(*debut_b)->next = temp_debut_b;
	while (temp_debut_b->next != *debut_b)
		temp_debut_b = temp_debut_b->next;
	temp_debut_b->next = NULL;
	if (testeur == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **debut_a, t_list **debut_b)
{
	write(1, "rrr\n", 4);
	rra(debut_a, 0);
	rrb(debut_b, 0);
}
