/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_b.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 15:05:15 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static int	*new_stack_a(t_data *information)
{
	int	i;
	int	*new_stack_a;

	new_stack_a = malloc(sizeof(int) * information->count_stack_a);
	i = 0;
	while (i < information->count_stack_a)
	{
		new_stack_a[i] = information->stack_a[i + 1];
		i++;
	}
	free(information->stack_a);
	return (new_stack_a);
}

static void	copy_others_numbers(t_data *information, int *stack_b_copy)
{
	int	i;

	i = 1;
	while (i < information->count_stack_b)
	{
		information->stack_b[i] = stack_b_copy[i - 1];
		i++;
	}
}

static void	set_pb(t_data *information)
{
	int	*allocate_stack_b;
	int	number_stack_b;

	number_stack_b = information->count_stack_b;
	information->count_stack_b++;
	information->count_stack_a--;
	if (number_stack_b == 0)
	{
		information->stack_b = malloc(sizeof(int) * information->count_stack_b);
		information->stack_b[0] = information->stack_a[0];
	}
	else
	{
		allocate_stack_b = copy_stack(information->stack_b, number_stack_b);
		free(information->stack_b);
		information->stack_b = malloc(sizeof(int) * information->count_stack_b);
		information->stack_b[0] = information->stack_a[0];
		copy_others_numbers(information, allocate_stack_b);
		free(allocate_stack_b);
	}
	information->stack_a = new_stack_a(information);
}

void	p_b(t_data *information, int one_more_time)
{
	int	i;

	i = 0;
	while (i < one_more_time)
	{
		set_pb(information);
		write(1, "pb\n", 3);
		i++;
	}
}
