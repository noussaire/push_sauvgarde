/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organization.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/17 14:55:43 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static int	is_ss(t_data *information)
{
	if (information->sa != 0 && information->sb != 0)
	{
		information->sa = 0;
		information->sb = 0;
		information->ss = 1;
		return (1);
	}
	return (0);
}

static int	is_rr(t_data *information)
{
	if (information->ra != 0 && information->rb != 0)
	{
		if (information->ra > information->rb)
		{
			information->rr = information->rb;
			information->ra = information->ra - information->rb;
			information->rb = 0;
		}
		else if (information->rb > information->ra)
		{
			information->rr = information->ra;
			information->rb = information->rb - information->ra;
			information->ra = 0;
		}
		else
		{
			information->rr = information->rb;
			information->rb = 0;
			information->ra = 0;
		}
		return (1);
	}
	return (0);
}

static int	is_rrr(t_data *information)
{
	if (information->rra != 0 && information->rrb != 0)
	{
		if (information->rra > information->rrb)
		{
			information->rrr = information->rrb;
			information->rra = information->rra - information->rrb;
			information->rrb = 0;
		}
		else if (information->rrb > information->rra)
		{
			information->rrr = information->rra;
			information->rrb = information->rrb - information->rra;
			information->rra = 0;
		}
		else
		{
			information->rrr = information->rrb;
			information->rrb = 0;
			information->rra = 0;
		}
		return (1);
	}
	return (0);
}

void	organization_the_rules(t_data *information)
{
	if (is_ss(information) == 1)
		return ;
	else if (is_rr(information) == 1)
		return ;
	else if (is_rrr(information) == 1)
		return ;
}