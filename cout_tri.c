/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cout_tri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 10:36:12 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 17:58:10 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cout_tri1(t_list **debut_b, t_list **debut_a, t_data *data, int **tab)
{
	int		i;
	t_list	*temp_debut_b;

	temp_debut_b = *debut_b;
	i = 0;
	while (i < ft_lstsize(*debut_b))
	{
		tab[i] = malloc(sizeof(int) * 2);
		if (!tab[i])
			ft_free_all_tab(tab, i);
		tab[i][1] = (int)ft_atoi(temp_debut_b->data);
		tab[i][0] = nb_put_top(tab[i][1], debut_b)
			+ nb_put_top(petit_majorant(debut_a, debut_b, data, tab[i][1]),
				debut_a);
		i++;
		temp_debut_b = temp_debut_b->next;
	}
}

void	cout_tri2(t_list **debut_b, t_list **debut_a, t_data *data, int **tab)
{
	int	i;
	int	mini;

	i = 0;
	mini = 0;
	while (i < ft_lstsize(*debut_b))
	{
		if (tab[i][0] < tab[mini][0])
			mini = i;
		i++;
	}
	put_top_a_whith_majorant(tab[mini][1], petit_majorant(debut_a, debut_b,
			data, tab[mini][1]), debut_a, debut_b);
}
