/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:51:36 by thrio             #+#    #+#             */
/*   Updated: 2022/12/14 18:21:17 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void    ft_free(long *taba, long *tabb, int *size_a, int *size_b)
{
    free(taba);
    free(tabb);
    free(size_a);
    free(size_b);
    exit(0);
}

int ft_stack_len(int ac, char **av)
{
    int i;
    int size;

    i = 0;
    size = 1;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] == 32)
                size++;
            i++;
        }
    }
    else
        size = ac - 1;
    return (size);
}

int	ft_append_numbers(long *taba,char **av, int *size)
{
	char	**buffer;

	buffer = NULL;
	if (size[0] == 1)
	{
		if (ft_case_string(taba, size, av, buffer) == -1)
			return (-1);
	}
	else
	{
		if (ft_case_normal(taba, size, av) == -1)
			return (-1);
	}
	if (ft_is_repeated(taba, size[0]) == -1)
		return (-1);
	if (ft_number_limits(taba, size[0]) == -1)
		return (-1);
	return (0);
}

int ft_is_sorted(long *taba, int *size)
{
    int i;
    int j;
    long max;

    i = 1;
    j = 0;
    max = taba[0];
    while (i < size[0])
    {
            if (max < taba[i])
            {
                max = taba[i];
                j++;
            }
        i++;
    }
    if (j == size[0] - 1)
        return (0);
    return (-1);
}