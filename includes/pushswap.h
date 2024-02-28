/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <jhoratiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:23:04 by jhoratiu          #+#    #+#             */
/*   Updated: 2024/02/28 11:44:13 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <bsd/string.h>
# include <stdio.h>
# include <ctype.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

void		ft_push_a();
void		ft_push_b();

void		ft_rotate_reverse_a();
void		ft_rotate_reverse_b();
void		ft_rotate_reverse_rr();

void		ft_rotate_a();
void		ft_rotate_b();
void		ft_rotate_rr();

void		ft_swap_a();
void		ft_swap_b();
void		ft_swap_ss();

void	push_swap(t_list **current, t_list **s_a, t_list **s_b, char *tab);
long int	ft_atoi(const char *str);
int			ft_strlen(char	*str);

int			ft_init_current(t_list **stack, char **argv);
void		ft_list_add_back(t_list **lst, t_list *new);
t_list		*ft_new_node(t_list **stack, int value);

// split
// static size_t	ft_count_words(const char *str, char c);
// static void		ft_free_tab(char **tab);
// static int		ft_tab_imp(char **tab, char *str, char c);
char			**ft_split(char const *s, char c);

#endif