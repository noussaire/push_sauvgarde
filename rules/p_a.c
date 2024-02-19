/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 15:04:50 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static int	*new_stack_b(t_data *information)
{
	int	i;
	int	*new_stack_b;

	new_stack_b = malloc(sizeof(int) * information->count_stack_b);
	i = 0;
	while (i < information->count_stack_b)
	{
		new_stack_b[i] = information->stack_b[i + 1];
		i++;
	}
	free(information->stack_b);
	return (new_stack_b);
}

static void	copy_other_numbers(t_data *information, int *stack_b_copy)
{
	int	i;

	i = 1;
	while (i < information->count_stack_a)
	{
		information->stack_a[i] = stack_b_copy[i - 1];
		i++;
	}
}

static void	set_pa(t_data *information)
{
	int	*allocate_stack_a;
	int	number_stack_a;

	number_stack_a = information->count_stack_a;
	information->count_stack_a++;
	information->count_stack_b--;
	allocate_stack_a = copy_stack(information->stack_a, number_stack_a);
	free(information->stack_a);
	information->stack_a = malloc(sizeof(int) * information->count_stack_a);
	information->stack_a[0] = information->stack_b[0];
	copy_other_numbers(information, allocate_stack_a);
	free(allocate_stack_a);
	information->stack_b = new_stack_b(information);
}

void	p_a(t_data *information, int one_more_time)
{
	int	i;

	i = 0;
	while (i < one_more_time)
	{
		set_pa(information);
		write(1, "pa\n", 3);
		i++;
	}
}
