/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:44:27 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/14 13:44:30 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static void	set_rra(t_data *information)
{
	int	tmp;
	int	i;

	write(1, "rra\n", 4);
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

void	rr_a(t_data *information, int one_more)
{
	int	i;

	i = 0;
	while (i < one_more)
	{
		set_rra(information);
		i++;
	}
}
