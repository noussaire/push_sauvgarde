/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenasso <nbenasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:59:22 by nbenasso          #+#    #+#             */
/*   Updated: 2024/02/17 14:53:16 by nbenasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heiders/push_swap.h"

int	cheacke_int(char *str)
{
	int	i;
	int	sign;
	int	number;

	number = 0;
	sign = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			sign++;
		if (str[i] >= '0' && str[i] <= '9')
			number++;
		if ((str[i] < '0' || str[i] > '9') && (str[i] != '-' && str[i] != '+'))
			return (1);
		if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] == '-' || str[i
				+ 1] == '+'))
			return (1);
		i++;
	}
	if (sign > 1 || number == 0)
		return (1);
	return (0);
}

int	if_there_is_no_number(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (cheacke_int(argv[i + 1]) == 1)
			return (1);
		if (if_number_is_max_or_min(argc, argv) == 1)
			return (1);
		i++;
	}
	return (0);
}

int	if_number_is_max_or_min(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i + 1]) > 2147483647 || ft_atoi(argv[i + 1]) <
			-2147483648)
			return (1);
		i++;
	}
	return (0);
}

static int	check_if_there_is_double_zero(int argc, char **argv)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	j = 0;
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		count = 0;
		while (j < argc - 1)
		{
			if (ft_atoi(argv[i + 1]) == ft_atoi(argv[j + 1]))
				count++;
			j++;
		}
		if (count > 1)
			return (1);
		i++;
	}
	return (0);
}

int	check_error(int argc, char **argv, int format)
{
	
	if (format == 0)
	{
		if (if_there_is_no_number(argc, argv) == 1)
			return (1);
		if (check_if_there_is_double_zero(argc, argv) == 1)
			return (1);
		
	}
	if (format == 1)
	{
		if (if_there_is_no_number_tow(argc, argv) == 1)
			return (1);
		if (check_if_there_is_double_one(argc, argv) == 1)
			return (1);
		
	}
	return (0);
}