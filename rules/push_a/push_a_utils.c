/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 15:03:01 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../heiders/push_swap.h"

void	ways_to_a(t_data *information, int pos)
{
	if (pos == 0)
		return ;
	else if (pos == 1)
		information->ra = 1;
	else if (pos == information->count_stack_a - 1)
		information->rra = 1;
	else if (pos <= information->count_stack_a / 2)
		information->ra = pos;
	else if (pos > information->count_stack_a / 2)
		information->rra = information->count_stack_a - pos;
}

void	ways_to_b(t_data *information, int pos)
{
	if (pos == 0)
		return ;
	else if (pos == 1)
		information->rb = 1;
	else if (pos == information->count_stack_b - 1)
		information->rrb = 1;
	else if (pos <= information->count_stack_b / 2)
		information->rb = pos;
	else if (pos > information->count_stack_b / 2)
		information->rrb = information->count_stack_b - pos;
}

int	get_small_number(t_data *information)
{
	int	var;
	int	i;
	int	pos;

	var = information->stack_a[0];
	i = 0;
	while (i < information->count_stack_a)
	{
		if (var >= information->stack_a[i])
		{
			var = information->stack_a[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}
