/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:33:34 by thrio             #+#    #+#             */
/*   Updated: 2022/12/14 14:57:18 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    swap_a(long *taba, int size)
{
    long    buf;
    
    if (size >= 2)
    {
        buf = taba[0];
        taba[0] = taba[1];
        taba[1] = buf;
    }
}

void    swap_b(long *tabb, int size)
{
    long    buf;
    
    if (size >= 2)
    {
        buf = tabb[0];
        tabb[0] = tabb[1];
        tabb[1] = buf;
    }
}

void    swap_ab(long *taba, long *tabb, int size_a, int size_b)
{
    swap_a(taba, size_a);
    swap_b(tabb, size_b);
}