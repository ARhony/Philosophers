/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:20:13 by aramon            #+#    #+#             */
/*   Updated: 2023/05/29 12:20:35 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	check_errors(const char *nptr, int *sign, int *i)
{
	int	sign_count;

	sign_count = 0;
	while (ft_isspace(nptr[*i]))
		(*i)++;
	while (nptr[*i] == '-')
	{
		(*sign) *= -1;
		if (nptr[*i + 1] == '-' && nptr[*i + 1] != '\0')
			return (0);
		sign_count++;
		(*i)++;
	}
	if (nptr[*i] == '+' && sign_count == 0)
		(*i)++;
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	sign;

	n = 0;
	i = 0;
	sign = 1;
	if (check_errors(nptr, &sign, &i) == 0)
		return (0);
	while (ft_isdigit(nptr[i]))
	{
		n *= 10;
		n += nptr[i] - '0';
		i++;
	}
	n *= sign;
	return (n);
}