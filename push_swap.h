/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:00:33 by mcatal-d          #+#    #+#             */
/*   Updated: 2022/12/30 17:41:51 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*data;
	struct s_list	*next;
}					t_list;

typedef struct s_data
{
	int				*tab;
	int				size;
	int				min;
	int				max;
	int				mediane;
}					t_data;

void				sa(t_list **debut_a, int testeur);
void				sb(t_list **debut_b, int testeur);
void				ss(t_list **debut_a, t_list **debut_b);

void				pa(t_list **debut_a, t_list **debut_b);
void				pb(t_list **debut_b, t_list **debut_a);

void				ra(t_list **debut_a, int testeur);
void				rb(t_list **debut_b, int testeur);
void				rr(t_list **debut_a, t_list **debut_b);

void				rra(t_list **debut_a, int testeur);
void				rrb(t_list **debut_b, int testeur);
void				rrr(t_list **debut_a, t_list **debut_b);

long int			ft_atoi(const char *str);
t_list				*ft_lst_add(t_list *lst, char *content);
int					main(int argc, char **argv);
void				main2(t_list **debut_a, t_list **debut_b, t_data *data);

int					ft_lstsize(t_list *lst);
void				ft_swap(int *a, int *b);
void				tri(int *tab, int size);
void				remplir_tab(t_list **debut, t_data *data);

void				pretrie(t_list **debut_a, t_list **debut_b, t_data *data);

int					nb_put_top(int elmt, t_list **debut_b);
void				cout_tri(t_list **debut_b, t_list **debut_a, t_data *data);
void				decalage(int i, int j, t_list **debut_a, t_list **debut_b);
void				put_top_a_whith_majorant(int elmt, int majorant,
						t_list **debut_b, t_list **debut_a);
int					petit_majorant(t_list **debut_a, t_list **debut_b,
						t_data *data, int elmt);

void				cout_tri1(t_list **debut_b, t_list **debut_a, t_data *data,
						int **tab);
void				cout_tri2(t_list **debut_b, t_list **debut_a, t_data *data,
						int **tab);

int					ft_tablen(int **tab);
void				*ft_free_all_tab(int **tab, int elts);
void				free_list(t_list *debut_a);

int					check_int(char *str, char **argv, int j);
int					check(int i, int argc, char **argv, int j);

#endif