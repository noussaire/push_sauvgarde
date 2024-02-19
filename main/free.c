/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 14:39:03 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

void	ft_free_argv(char **argv, int format)
{
	int	i;

	i = 0;
	if (format == 1)
	{
		while (argv[i] != 0)
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
}

void	ft_free_memory(t_data *information)
{
	free(information->stack_a);
	free(information->list_sorted);
	if (information->total_numbers > 3)
		free(information->stack_b);
}
