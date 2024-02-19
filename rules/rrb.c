/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:43:05 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/13 15:50:14 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static void	set_rrb(t_data *information)
{
	int	tmp;
	int	i;

	write(1, "rrb\n", 4);
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

void	rr_b(t_data *information, int one_more)
{
	int	i;

	i = 0;
	while (i < one_more)
	{
		set_rrb(information);
		i++;
	}
}
