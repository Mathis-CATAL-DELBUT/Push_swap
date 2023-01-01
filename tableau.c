/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:43:54 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/28 16:55:55 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	tri(int *tab, int size)
{
	int	compteur;
	int	i;

	i = 0;
	compteur = 1;
	while (compteur < size)
	{
		while (compteur < size)
		{
			if (tab[compteur] < tab[i])
				ft_swap(&tab[i], &tab[compteur]);
			compteur++;
		}
		compteur = i + 1;
		i++;
	}
}

void	remplir_tab(t_list **debut, t_data *data)
{
	t_list	*temp_debut;
	int		i;

	temp_debut = *debut;
	i = 0;
	data->size = ft_lstsize(temp_debut);
	data->tab = malloc(sizeof(int) * data->size);
	while (temp_debut)
	{
		data->tab[i] = ft_atoi(temp_debut->data);
		temp_debut = temp_debut->next;
		i++;
	}
	tri(data->tab, data->size);
	data->min = data->tab[0];
	data->max = data->tab[data->size - 1];
	data->mediane = data->tab[(data->size) / 2];
}
