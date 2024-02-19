/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:44:45 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/14 13:44:47 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static void	set_sa(t_data *information)
{
	int	tmp;

	write(1, "sa\n", 3);
	tmp = information->stack_a[0];
	information->stack_a[0] = information->stack_a[1];
	information->stack_a[1] = tmp;
}

void	s_a(t_data *information, int one_more)
{
	int	i;

	i = 0;
	while (i < one_more)
	{
		set_sa(information);
		i++;
	}
}
