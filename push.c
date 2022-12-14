/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:44:33 by thrio             #+#    #+#             */
/*   Updated: 2022/12/14 14:07:09 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push_a(long *taba, long *tabb, int *size_a, int *size_b)
{
	int	i;

	if (size_b == 0)
		return ;
	i = size_a[0];
	(size_a[0])++;
	while (i > 0)
	{
		taba[i] = taba[i - 1];
		i--;
	}
	taba[0] = tabb[0];
	i = 0;
	while (i < size_b[0])
	{
		tabb[i] = tabb[i + 1];
		i++;
	}
	(size_b[0])--;
	if (size_b[0] == 0)
		tabb = NULL;
	write(1, "pa\n", 3);
}

void	push_b(long *taba, long *tabb, int *size_a, int *size_b)
{
	int	i;

	if (size_a == 0)
		return ;
	i = size_b[0];
	(size_b[0])++;
	while (i > 0)
	{
		tabb[i] = tabb[i - 1];
		i--;
	}
	tabb[0] = taba[0];
	i = 0;
	while (i < size_a[0])
	{
		taba[i] = taba[i + 1];
		i++;
	}
	(size_a[0])--;
	if (size_a[0] == 0)
		taba = NULL;
	write(1, "pb\n", 3);
}