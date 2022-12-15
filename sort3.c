/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:35:04 by thrio             #+#    #+#             */
/*   Updated: 2022/12/15 14:54:39 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_three_digit(long *taba, int size)
{
	if (taba[0] > taba[1] && taba[1] < taba[2] && taba[0] < taba[2])
		swap_a(taba, size);
	if (taba[0] > taba[1] && taba[1] > taba[2] && taba[0] > taba[2])
	{
		swap_a(taba, size);
		reverse_a(taba, size);
	}
	if (taba[0] > taba[1] && taba[1] < taba[2] && taba[0] > taba[2])
		rotate_a(taba, size);
	if (taba[0] < taba[1] && taba[1] > taba[2] && taba[0] < taba[2])
	{
		swap_a(taba, size);
		rotate_a(taba, size);
	}
	if (taba[0] < taba[1] && taba[1] > taba[2] && taba[0] > taba[2])
		reverse_a(taba, size);
}
