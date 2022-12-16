/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:13:29 by thrio             #+#    #+#             */
/*   Updated: 2022/12/16 10:05:19 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_with_error(int *size_a, int *size_b)
{
	free(size_a);
	free(size_b);
	write(1, "Error\n", 6);
	exit(0);
}

void	ft_without_error(int *size_a, int *size_b)
{
	free(size_a);
	free(size_b);
	exit(0);
}

void	ft_checker(int ac, char **av, int *size_a, int *size_b)
{
	int		i;
	size_t	j;

	i = 1;
	j = 0;
	if (ac < 2)
		ft_without_error(size_a, size_b);
	while (i < ac)
	{
		if (av[i][ft_strlen(av[i]) - 1] == ' ' || av[i][0] == ' ')
			ft_with_error(size_a, size_b);
		j = 0;
		while (j < ft_strlen(av[i]))
		{
			if ((av[i][j] < 48 || av[i][j] > 57) && av[i][j] != 32)
			{
				if (av[i][j] != 45)
					ft_with_error(size_a, size_b);
			}
			if (av[i][j] == 32 && av[i][j + 1] == 32)
				ft_with_error(size_a, size_b);
			j++;
		}
	i++;
	}
}

int	main(int ac, char **av)
{
	long	*taba;
	long	*tabb;
	int		*size_a;
	int		*size_b;

	size_a = (int *)malloc(sizeof(int));
	size_b = (int *)malloc(sizeof(int));
	size_a[0] = ac - 1;
	size_b[0] = 0;
	ft_checker(ac, av, size_a, size_b);
	taba = (long *)malloc(sizeof(long) * ft_stack_len(ac, av));
	tabb = (long *)malloc(sizeof(long) * ft_stack_len(ac, av));
	if (ft_append_numbers(taba, av, size_a) == -1
		|| ft_is_sorted(taba, size_a) == 0)
		ft_free(taba, tabb, size_a, size_b);
	if (size_a[0] == 2 && taba[0] > taba[1])
		rotate_a(taba, size_a[0]);
	else if (size_a[0] == 3)
		sort_three_digit(taba, size_a[0]);
	else if (size_a[0] == 5)
		sort_five_digit(taba, tabb, size_a, size_b);
	else
		sort_other_digit(taba, tabb, size_a, size_b);
	ft_free(taba, tabb, size_a, size_b);
	return (0);
}
