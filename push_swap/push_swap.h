/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaskiri <shaskiri@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:47:35 by shaskiri          #+#    #+#             */
/*   Updated: 2023/12/28 08:40:53 by shaskiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	char	**av;
	int		split;
}	t_stack;

//functions1
void	ft_error(t_stack *stack);
int		ft_ps_strlen(char **str);
int		ft_ps_atoi(char *str, t_stack *stack);
void	ft_check_repeat(t_stack *stack, int size);
//functions2
int		ft_checked_sorted(int *stack_a, int size, int flag);
int		ft_sort(t_stack *stack, int size);
void	ft_sort_three(t_stack *s);
void	ft_sort_int_tmp(int *tmp_stack, int size);
//functions3
void	ft_quicksort_3(t_stack *stack, int len);
int		ft_sort_small_b(t_stack *s, int len);
int		ft_push(t_stack *stack, int len, int operation);
int		ft_get_middle(int *pivot, int *stack_a, int size);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);
//rules a
void	sa(t_stack *stack, int print);
void	rra(t_stack *stack, int print);
void	ra(t_stack *stack, int print);
void	pa(t_stack *stack, int print);
//rules b
void	pb(t_stack *stack, int print);
void	sb(t_stack	*stack, int print);
void	rb(t_stack	*stack, int print);
void	rrb(t_stack *stack, int print);

void	ft_push_swap(t_stack *stack);

#endif
