/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:44:58 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/14 13:45:00 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static void	set_sa(t_data *information)
{
	int	tmp;

	tmp = information->stack_a[0];
	information->stack_a[0] = information->stack_a[1];
	information->stack_a[1] = tmp;
}

static void	set_sb(t_data *information)
{
	int	tmp;

	tmp = information->stack_b[0];
	information->stack_b[0] = information->stack_b[1];
	information->stack_b[1] = tmp;
}

static void	set_ss(t_data *information)
{
	set_sa(information);
	set_sb(information);
	write(1, "ss\n", 3);
}

void	ss(t_data *information, int one_more)
{
	int	i;

	i = 0;
	while (i < one_more)
	{
		set_ss(information);
		i++;
	}
}
