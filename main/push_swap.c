/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhoratiu <jhoratiu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:19:40 by jhoratiu          #+#    #+#             */
/*   Updated: 2024/02/28 11:49:07 by jhoratiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/pushswap.h"

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	if (lst && new)
// 	{
// 		new->next = *lst;
// 		*lst = new;
// 	}
// }

int		ft_init_current(t_list **stack, char **argv)
{
	t_list	*new;
	int		i;

	i = 0;
	new = NULL;
	while(argv[i])
	{
		new = ft_new_node(stack, ft_atoi(argv[i]));
		if(!new)
			return (0);
		ft_list_add_back(stack, new);
		i++;
	}
	return (1);
}

void	ft_list_add_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = NULL;
	if(!(*lst))
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
}

t_list	*ft_new_node(t_list **stack, int value)
{
	t_list	*new;
	t_list	*tmp;

	tmp = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if(!new)
	{
		free(new);
		while(*stack)
		{
			*stack = (*stack)->next;
			free(*stack);
			return (NULL);
		}
	}
	new->content = value;
	return (new);
}

void	push_swap(t_list **current, t_list **s_a, t_list **s_b, char *tab)
{
	if(ft_init_current(&(*current), &tab))
		*s_a = *current;
	s_b = NULL;
	return ;
}

int	main(int argc, char **argv){
	t_list	*current;
	t_list	*s_a;
	t_list	*s_b;

	s_a = NULL;
	s_b = NULL;
	current = NULL;
	if(argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	argv = ft_split(argv[1], ' ');
	while(*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	push_swap(&current, &s_a, &s_b, argv[1]);
	printf("\n");
	while(s_a->next != NULL)
	{
		printf("%d\n", s_a->content);
		*s_a = *s_a->next;
	}
	// free_stack(stack_a);
	return (0);
}