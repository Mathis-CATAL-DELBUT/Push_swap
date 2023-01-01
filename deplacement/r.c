/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:28:36 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 10:42:16 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **debut_a, int testeur)
{
	t_list	*temp_debut_a;
	t_list	*temp_decalage;

	if (!debut_a || !(*debut_a)->next)
		return ;
	temp_decalage = *debut_a;
	temp_debut_a = *debut_a;
	*debut_a = (*debut_a)->next;
	while (temp_decalage->next != NULL)
		temp_decalage = temp_decalage->next;
	temp_decalage->next = temp_debut_a;
	temp_debut_a->next = NULL;
	if (testeur == 1)
		write(1, "ra\n", 3);
}

void	rb(t_list **debut_b, int testeur)
{
	t_list	*temp_debut_b;
	t_list	*temp_decalage;

	if (!debut_b || !(*debut_b)->next)
		return ;
	temp_decalage = *debut_b;
	temp_debut_b = *debut_b;
	*debut_b = (*debut_b)->next;
	while (temp_decalage->next != NULL)
		temp_decalage = temp_decalage->next;
	temp_decalage->next = temp_debut_b;
	temp_debut_b->next = NULL;
	if (testeur == 1)
		write(1, "rb\n", 3);
}

void	rr(t_list **debut_a, t_list **debut_b)
{
	ra(debut_a, 0);
	rb(debut_b, 0);
	write(1, "rr\n", 3);
}
