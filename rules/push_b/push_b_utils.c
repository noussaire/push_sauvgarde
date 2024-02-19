/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/17 14:55:12 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../heiders/push_swap.h"

static int	num_is_big_or_small(t_data *information, int num)
{
	int	i;

	i = 0;
	while (i < information->count_stack_b)
	{
		if (num < information->stack_b[i])
			break ;
		i++;
	}
	if (i == information->count_stack_b)
		return (1);
	i = 0;
	while (i < information->count_stack_b)
	{
		if (num > information->stack_b[i])
			break ;
		i++;
	}
	if (i == information->count_stack_b)
		return (1);
	return (0);
}

static int	get_position_of_big_number(t_data *information)
{
	int	i;
	int	var;
	int	pos;

	i = 0;
	pos = 0;
	var = information->stack_b[0];
	while (i < information->count_stack_b)
	{
		if (var < information->stack_b[i])
		{
			var = information->stack_b[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int	get_position_from_stack_b(t_data *information, int num)
{
	int	var;
	int	i;
	int	pos;

	i = 0;
	var = num;
	pos = 0;
	if (num_is_big_or_small(information, num) == 1)
		return (get_position_of_big_number(information));
	while (i < information->count_stack_b)
	{
		if (var > information->stack_b[i])
			var = information->stack_b[i];
		i++;
	}
	i = -1;
	while (++i < information->count_stack_b)
	{
		if (information->stack_b[i] < num && information->stack_b[i] >= var)
		{
			var = information->stack_b[i];
			pos = i;
		}
	}
	return (pos);
}
