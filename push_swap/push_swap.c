/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaskiri <shaskiri@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:47:28 by shaskiri          #+#    #+#             */
/*   Updated: 2023/12/28 00:56:18 by shaskiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_push_swap(t_stack *stack)
{
	int		size;
	int		i;

	i = -1;
	size = ft_ps_strlen(stack->av);
	stack->a = malloc(sizeof(int) * size);
	if (!stack->a)
		return ;
	stack->size_a = size;
	stack->b = malloc(sizeof(int) * size);
	if (!stack->b)
	{
		free(stack->a);
		return ;
	}
	stack->size_b = 0;
	while (++i < size)
		stack->a[i] = ft_ps_atoi(stack->av[i], stack);
	ft_check_repeat(stack, size);
	ft_sort(stack, size);
	free(stack->a);
	free(stack->b);
}

int	main(int ac, char **av)
{
	t_stack	stack;
	int		i;

	i = 0;
	if (ac == 2)
	{
		av++;
		stack.av = ft_split(*av, ' ');
		stack.split = 1;
		ft_push_swap(&stack);
		ft_free(stack.av, ft_ps_strlen(stack.av));
	}
	else
	{
		stack.split = 0;
		stack.av = ++av;
		ft_push_swap(&stack);
	}
	return (0);
}
