/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:27:03 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 10:43:51 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **debut_a, t_list **debut_b)
{
	t_list	*temp_debut_a;
	t_list	*temp_debut_b_next;

	if (!*debut_a || !*debut_b)
	{
		if (!*debut_a)
		{
			*debut_a = *debut_b;
			*debut_b = (*debut_b)->next;
			(*debut_a)->next = NULL;
		}
		write(1, "pa\n", 3);
		return ;
	}
	temp_debut_a = *debut_a;
	temp_debut_b_next = (*debut_b)->next;
	*debut_a = *debut_b;
	(*debut_b)->next = temp_debut_a;
	*debut_b = temp_debut_b_next;
	write(1, "pa\n", 3);
}

void	pb(t_list **debut_a, t_list **debut_b)
{
	t_list	*temp_debut_b;
	t_list	*temp_debut_a_next;

	if (!*debut_a || !*debut_b)
	{
		if (!*debut_b)
		{
			*debut_b = *debut_a;
			*debut_a = (*debut_a)->next;
			(*debut_b)->next = NULL;
		}
		write(1, "pb\n", 3);
		return ;
	}
	temp_debut_b = *debut_b;
	temp_debut_a_next = (*debut_a)->next;
	*debut_b = *debut_a;
	(*debut_a)->next = temp_debut_b;
	*debut_a = temp_debut_a_next;
	write(1, "pb\n", 3);
}
