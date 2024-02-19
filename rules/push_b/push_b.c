/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/17 14:55:23 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../heiders/push_swap.h"

static void	calcule_number_instruction(t_data *information)
{
	int	i;

	i = 0;
	while (i < information->count_stack_a)
	{
		ways_to_a(information, i);
		ways_to_b(information, get_position_from_stack_b(information,
				information->stack_a[i]));
		organization_the_rules(information);
		information->tab_instruc[i] = information->sa + information->sb
			+ information->ss + information->ra + information->rb
			+ information->rr + information->rra + information->rrb
			+ information->rrr;
		initial_rules(information);
		i++;
	}
}

static int	get_position_small_instr(t_data *information)
{
	int	i;
	int	pos;
	int	var;

	var = information->tab_instruc[0];
	i = 0;
	pos = 0;
	while (i < information->count_stack_a)
	{
		if (var > information->tab_instruc[i])
		{
			pos = i;
			var = information->tab_instruc[i];
		}
		i++;
	}
	return (pos);
}

void	push_to_b(t_data *information)
{
	int	small_instr;

	small_instr = 0;
	if (information->total_numbers == 4)
		p_b(information, 1);
	else if (information->total_numbers > 4)
		p_b(information, 2);
	while (information->count_stack_a > 3)
	{
		information->tab_instruc = malloc(sizeof(int)
				* information->count_stack_a);
		calcule_number_instruction(information);
		small_instr = get_position_small_instr(information);
		ways_to_a(information, small_instr);
		ways_to_b(information, get_position_from_stack_b(information,
				information->stack_a[small_instr]));
		organization_the_rules(information);
		run(information);
		p_b(information, 1);
		free(information->tab_instruc);
		initial_rules(information);
	}
}
