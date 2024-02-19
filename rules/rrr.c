/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:43:51 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/17 14:57:14 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static void	set_rrb(t_data *information)
{
	int	tmp;
	int	i;

	i = information->count_stack_b - 1;
	tmp = information->stack_b[information->count_stack_b - 1];
	while (i >= 0)
	{
		if (i != 0)
			information->stack_b[i] = information->stack_b[i - 1];
		else
			information->stack_b[i] = tmp;
		i--;
	}
}

static void	set_rra(t_data *information)
{
	int	tmp;
	int	i;

	i = information->count_stack_a - 1;
	tmp = information->stack_a[information->count_stack_a - 1];
	while (i >= 0)
	{
		if (i != 0)
			information->stack_a[i] = information->stack_a[i - 1];
		else
			information->stack_a[i] = tmp;
		i--;
	}
}

static void	set_rrr(t_data *information)
{
	set_rra(information);
	set_rrb(information);
	write(1, "rrr\n", 4);
}

void	rrr(t_data *information, int one_more)
{
	int	i;

	i = 0;
	while (i < one_more)
	{
		set_rrr(information);
		i++;
	}
}
