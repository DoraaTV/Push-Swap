/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:40:09 by thrio             #+#    #+#             */
/*   Updated: 2022/12/19 10:10:58 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_make_copy(long *tabconverted, long *copy, long *taba, int *size_a)
{
	int	i;

	i = 0;
	while (i < size_a[0])
	{
		tabconverted[i] = taba[i];
		copy[i] = taba[i];
		i++;
	}
}

void	ft_bubble_sort(long *tabconverted, int *size_a)
{
	long	i;
	long	j;
	long	buf;

	i = 0;
	while (i < size_a[0])
	{
		j = i + 1;
		while (j < size_a[0])
		{
			if (tabconverted[i] > tabconverted[j])
			{
				buf = tabconverted[i];
				tabconverted[i] = tabconverted[j];
				tabconverted[j] = buf;
			}
			j++;
		}
		i++;
	}
}

void	ft_converter(long *tabconverted, long *tabcopy, long *taba, int *size_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < size_a[0])
	{
		j = 0;
		while (j < size_a[0])
		{
			if (tabcopy[i] == tabconverted[j])
			{
				taba[i] = j;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort(long *taba, long *tabb, int *size_a, int *size_b)
{
	int	size;
	int	bitssize;
	int	i[2];

	size = size_a[0] - 1;
	bitssize = 0;
	i[0] = 0;
	while (size >> bitssize != 0)
		bitssize++;
	while (i[0] < bitssize)
	{
		i[1] = 0;
		while (i[1] <= size)
		{
			if ((taba[0] >> i[0] & 1) == 1)
				rotate_a(taba, size_a[0]);
			else
				push_b(taba, tabb, size_a, size_b);
			i[1]++;
		}
		while (size_b[0] > 0)
			push_a(taba, tabb, size_a, size_b);
		i[0]++;
	}
}

void	sort_other_digit(long *taba, long *tabb, int *size_a, int *size_b)
{
	long	*tabcopy;
	long	*tabconverted;

	tabcopy = (long *)malloc(sizeof(long) * size_a[0]);
	tabconverted = (long *)malloc(sizeof(long) * size_a[0]);
	ft_make_copy(tabconverted, tabcopy, taba, size_a);
	ft_bubble_sort(tabconverted, size_a);
	ft_converter(tabconverted, tabcopy, taba, size_a);
	free(tabcopy);
	free(tabconverted);
	ft_sort(taba, tabb, size_a, size_b);
}
