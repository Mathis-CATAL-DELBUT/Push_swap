/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:24:56 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 10:44:46 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **debut_a, int testeur)
{
	t_list	*temp_debut_a;
	t_list	*temp_debut_a_next;

	if (!*debut_a || !(*debut_a)->next || !(*debut_a)->next->next)
		return ;
	temp_debut_a = (*debut_a);
	temp_debut_a_next = (*debut_a)->next;
	(*debut_a)->next = (*debut_a)->next->next;
	(*debut_a) = temp_debut_a_next;
	(*debut_a)->next = temp_debut_a;
	if (testeur == 1)
		write(1, "sa\n", 3);
}

void	sb(t_list **debut_b, int testeur)
{
	t_list	*temp_debut_b;
	t_list	*temp_debut_b_next;

	if (!*debut_b || !(*debut_b)->next || !(*debut_b)->next->next)
		return ;
	temp_debut_b = (*debut_b);
	temp_debut_b_next = (*debut_b)->next;
	(*debut_b)->next = (*debut_b)->next->next;
	(*debut_b) = temp_debut_b_next;
	(*debut_b)->next = temp_debut_b;
	if (testeur == 1)
		write(1, "sb\n", 3);
}

void	ss(t_list **debut_a, t_list **debut_b)
{
	write(1, "ss\n", 3);
	sa(debut_a, 0);
	sb(debut_b, 0);
}
