/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:52:36 by thrio             #+#    #+#             */
/*   Updated: 2022/12/14 12:19:58 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    rotate_a(long *taba, int size)
{
    int i;
    long    buf;

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