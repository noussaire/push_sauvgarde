/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:33:44 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/19 14:58:35 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

static int	cheack(t_data *information, int numbers, char **new_argv,
		int format)
{
	if (!new_argv)
		return (write(2, "Error\n", 6), 0);
	if (check_error(numbers, new_argv, format) == 1)
		return (write(2, "Error\n", 6), ft_free_argv(new_argv, format), 0);
	if (numbers == 1)
		return (0);
	initial_rules(information);
	if (format == 1)
		information->total_numbers = numbers;
	else
		information->total_numbers = numbers - 1;
	information->stack_a = malloc(sizeof(int) * information->total_numbers);
	remplire_stack_a(information, new_argv, format);
	information->count_stack_a = information->total_numbers;
	information->count_stack_b = 0;
	information->list_sorted = sort_list(information);
	if (sorted(information) == 1)
		return (free(information->list_sorted), free(information->stack_a),
			ft_free_argv(new_argv, format), 0);
	return (1);
}

static int	freeeeeeeee(t_data *information, char **new_argv, int format,
		int numbers)
{
	if (cheack(information, numbers, new_argv, format) == 0)
		return (0);
	all_step(information);
	ft_free_memory(information);
	ft_free_argv(new_argv, format);
	return (1);
}

static void	equal(char ***new_argv, int *number, int argc, char **argv)
{
	*new_argv = argv;
	*number = argc;
}

int	main(int argc, char **argv)
{
	t_data	information;
	int		format;
	int		numbers;
	char	**new_argv;

	format = 0;
	numbers = 0;
	if (check_format(argc, argv) == 1)
	{
		format = 1;
		new_argv = handle_arguments_format(argv);
		numbers = count_num(argv[1], 32);
	}
	else
	{
		if (check_format_two(argc, argv) == 0)
			equal(&new_argv, &numbers, argc, argv);
		else
		{
			format = 1;
			new_argv = join_argv(argc, argv);
			numbers = lent(argc, argv);
		}
	}
	freeeeeeeee(&information, new_argv, format, numbers);
}
