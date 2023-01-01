/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:59:04 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 18:00:15 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_tablen(int **tab)
{
	int	i;

	i = 0;
	while (*tab[i])
	{
		printf("%d\n", i);
		i++;
	}
	return (i);
}

void	*ft_free_all_tab(int **tab, int elts)
{
	int	i;

	i = 0;
	(void)(elts);
	while (i < elts)
	{
		free(tab[i]);
		i++;
	}
	return (NULL);
}

void	free_list(t_list *debut_a)
{
	t_list	*temp_debut_a;

	while (debut_a != NULL)
	{
		temp_debut_a = debut_a;
		debut_a = debut_a->next;
		free(temp_debut_a);
	}
}
