/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:19:36 by thrio             #+#    #+#             */
/*   Updated: 2022/12/14 19:17:26 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_number_limits(long *taba, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if ((taba[i] > 2147483647) || (taba[i] < -2147483648))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	else
		return (0);
}

int ft_is_numbers(char *numbers)
{
    int i;
    int neg;

    i = 0;
    neg = 0;
    while (numbers[i])
    {
        if (numbers[i] == 45)
            neg++;
        else if(ft_isdigit(numbers[i] == 0))
            return (0);
        i++;
    }
    if (neg > 1)
        return (0);
    return (1);
}