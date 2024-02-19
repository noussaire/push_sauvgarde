/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 15:02:10 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../heiders/push_swap.h"

static int	is_big_num_in_stack_a(t_data *information, int num)
{
	int	i;

	i = 0;
	while (i < information->count_stack_a)
	{
		if (num < information->stack_a[i])
			break ;
		i++;
	}
	if (i == information->count_stack_a)
		return (1);
	return (0);
}

static int	get_position_from_stack_a(t_data *information, int num)
{
	int	var;
	int	i;
	int	pos;

	i = 0;
	var = information->stack_a[0];
	if (is_big_num_in_stack_a(information, num) == 1)
		return (get_small_number(information));
	while (i < information->count_stack_a)
	{
		if (information->stack_a[i] >= var)
			var = information->stack_a[i];
		i++;
	}
	i = -1;
	while (++i < information->count_stack_a)
	{
		if (information->stack_a[i] > num && information->stack_a[i] <= var)
		{
			var = information->stack_a[i];
			pos = i;
		}
	}
	return (pos);
}

void	push_to_a(t_data *information)
{
	if (information->count_stack_b != 0)
	{
		while (information->count_stack_b > 0)
		{
			initial_rules(information);
			ways_to_a(information, get_position_from_stack_a(information,
					information->stack_b[0]));
			run(information);
			p_a(information, 1);
		}
		initial_rules(information);
		ways_to_a(information, get_small_number(information));
		run(information);
	}
}
