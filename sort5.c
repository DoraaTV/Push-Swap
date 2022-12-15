/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:29:36 by thrio             #+#    #+#             */
/*   Updated: 2022/12/15 17:27:59 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	ft_helper(long *taba, long *tabb, int *size_a, int *size_b)
{
	push_a(taba, tabb, size_a, size_b);
	rotate_a(taba, size_a[0]);
}

static void	ft_init_sort(long *taba, long *tabb, int *size_a, int *size_b)
{
	if (taba[0] > tabb[0])
		push_a(taba, tabb, size_a, size_b);
	else if (taba[0] < tabb[0] && taba[1] > tabb[0])
	{
		rotate_a(taba, size_a[0]);
		push_a(taba, tabb, size_a, size_b);
		reverse_a(taba, size_a[0]);
	}
	else if (taba[1] < tabb[0] && taba[2] > tabb[0])
	{
		reverse_a(taba, size_a[0]);
		push_a(taba, tabb, size_a, size_b);
		reverse_a(taba, size_a[0]);
		reverse_a(taba, size_a[0]);
	}
	else if (taba[2] < tabb[0])
		ft_helper(taba, tabb, size_a, size_b);
}

static void	ft_finish_sort(long *taba, long *tabb, int *size_a, int *size_b)
{
	if (taba[0] > tabb[0])
		push_a(taba, tabb, size_a, size_b);
	else if (taba[0] < tabb[0] && taba[1] > tabb[0])
	{
		rotate_a(taba, size_a[0]);
		push_a(taba, tabb, size_a, size_b);
		reverse_a(taba, size_a[0]);
	}
	else if (taba[1] < tabb[0] && taba[2] > tabb[0])
	{
		rotate_a(taba, size_a[0]);
		push_a(taba, tabb, size_a, size_b);
		swap_a(taba, size_a[0]);
		reverse_a(taba, size_a[0]);
	}
	else if (taba[2] < tabb[0] && taba[3] > tabb[0])
	{
		reverse_a(taba, size_a[0]);
		push_a(taba, tabb, size_a, size_b);
		rotate_a(taba, size_a[0]);
		rotate_a(taba, size_a[0]);
	}
	else if (taba[3] < tabb[0])
		ft_helper(taba, tabb, size_a, size_b);
}

void	sort_five_digit(long *taba, long *tabb, int *size_a, int *size_b)
{
	push_b(taba, tabb, size_a, size_b);
	push_b(taba, tabb, size_a, size_b);
	sort_three_digit(taba, size_a[0]);
	while (size_b[0] != 0)
	{
		if (size_a[0] == 3)
			ft_init_sort(taba, tabb, size_a, size_b);
		else if (size_a[0] == 4)
			ft_finish_sort(taba, tabb, size_a, size_b);
	}
}
