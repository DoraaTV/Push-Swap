/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 09:30:59 by thrio             #+#    #+#             */
/*   Updated: 2022/12/14 14:57:00 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

/*-----------*/
/*--HEADERS--*/
/*-----------*/

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

/*-------------*/
/*--FUNCTIONS--*/
/*-------------*/

size_t	ft_strlen(const char *str);
void	ft_with_error(int *size);
void	ft_checker(int ac, char **av, int *size);
void	ft_free(long *taba, long *tabb, int *size);
int		ft_is_sorted(long *taba, int *size);
int		ft_stack_len(int ac, char **av);
char	**ft_split(char const *s, char c);
int		ft_case_string(long *taba, int *size, char **av, char **buffer);
int		ft_append_numbers(long *taba,char **av, int *size);
int		ft_case_normal(long *taba, int *size, char **av);
int		ft_is_numbers(char *numbers);
int		ft_isdigit(int c);
int		ft_atoi(const char *nptr);
int		ft_is_repeated(long *taba, int size);
int		ft_number_limits(long *taba, int size);
void	rotate_a(long *taba, int size);
void	rotate_b(long *tabb, int size);
void	rotate_ab(long *taba, long *tabb, int size_a, int size_b);
void	swap_a(long *taba, int size);
void	swap_b(long *tabb, int size);
void	swap_ab(long *taba, long *tabb, int size_a, int size_b);
void	push_a(long *taba, long *tabb, int *size_a, int *size_b);
void	push_b(long *taba, long *tabb, int *size_a, int *size_b);
void	reverse_b(long *tabb, int size);
void	reverse_a(long *taba, int size);

#endif