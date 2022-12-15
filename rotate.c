/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:52:36 by thrio             #+#    #+#             */
/*   Updated: 2022/12/15 14:54:14 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotate_a(long *taba, int size)
{
	int		i;
	long	buf;

	i = 0;
	while (i < size - 1)
	{
		if (i == 0)
		{
			buf = taba[0];
			taba[0] = taba[size - 1];
			taba[size - 1] = buf;
		}
		else
		{
			buf = taba[i];
			taba[i] = taba[i - 1];
			taba[i - 1] = buf;
		}
		i++;
	}
	write(1, "ra\n", 3);
}

void	rotate_b(long *tabb, int size)
{
	int		i;
	long	buf;

	i = 0;
	while (i < size - 1)
	{
		if (i == 0)
		{
			buf = tabb[0];
			tabb[0] = tabb[size - 1];
			tabb[size - 1] = buf;
		}
		else
		{
			buf = tabb[i];
			tabb[i] = tabb[i - 1];
			tabb[i - 1] = buf;
		}
		i++;
	}
	write(1, "rb\n", 3);
}

void	rotate_ab(long *taba, long *tabb, int size_a, int size_b)
{
	int		i;
	long	buf;

	i = 0;
	buf = taba[0];
	while (i < size_a)
	{
		taba[i] = taba[i + 1];
		i++;
	}
	taba[size_a - 1] = buf;
	i = 0;
	buf = tabb[0];
	while (i < size_b)
	{
		tabb[i] = tabb[i + 1];
		i++;
	}
	tabb[size_b - 1] = buf;
	write(1, "rr\n", 4);
}
