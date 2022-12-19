/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:52:39 by thrio             #+#    #+#             */
/*   Updated: 2022/12/19 15:22:43 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

long	ft_atoi(const char *nptr)
{
	long	neg;
	long	res;

	neg = 1;
	res = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == 45 || *nptr == 43)
	{
		if (*nptr == 45)
			neg = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	return (res * neg);
}

int	ft_is_repeated(long *taba, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (taba[i] == taba[j] && i != j)
			{
				write(2, "Error\n", 6);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_dofree(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_case_string(long *taba, int *size, char **av, char **buffer)
{
	int	i;
	int	numbers;

	i = 0;
	numbers = 0;
	buffer = ft_split(av[1], 32);
	if (!buffer)
		return (-1);
	while (buffer[i])
	{
		numbers++;
		i++;
	}
	size[0] = numbers;
	i = 0;
	while (i < size[0])
	{
		taba[i] = ft_atoi(buffer[i]);
		i++;
	}
	ft_dofree(buffer);
	return (0);
}

int	ft_case_normal(long *taba, int *size, char **av)
{
	int	i;

	i = 0;
	while (i < size[0])
	{
		if (ft_is_numbers(av[i + 1]) == 1)
			taba[i] = ft_atoi(av[i + 1]);
		else
		{
			write(2, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}
