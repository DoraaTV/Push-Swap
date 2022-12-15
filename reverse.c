/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:00:23 by thrio             #+#    #+#             */
/*   Updated: 2022/12/15 14:53:41 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	reverse_a(long *taba, int size)
{
	int		i;
	long	buf;

	i = size - 1;
	buf = taba[size - 1];
	while (i > 0)
	{
		taba[i] = taba[i - 1];
		i--;
	}
	taba[0] = buf;
	write(1, "rra\n", 4);
}

void	reverse_b(long *tabb, int size)
{
	int		i;
	long	buf;

	i = size - 1;
	buf = tabb[size - 1];
	while (i > 0)
	{
		tabb[i] = tabb[i - 1];
		i--;
	}
	tabb[0] = buf;
	write(1, "rrb\n", 4);
}

void	reverse_ab(long *taba, long *tabb, int size_a, int size_b)
{
	int		i;
	long	buf;

	i = size_a - 1;
	buf = taba[size_a - 1];
	while (i > 0)
	{
		taba[i] = taba[i - 1];
		i--;
	}
	taba[0] = buf;
	i = size_b - 1;
	buf = tabb[size_b - 1];
	while (i > 0)
	{
		tabb[i] = tabb[i - 1];
		i--;
	}
	tabb[0] = buf;
	write(1, "rrr\n", 4);
}
