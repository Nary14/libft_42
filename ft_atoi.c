/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: traomeli <traomeli@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 01:08:11 by traomeli          #+#    #+#             */
/*   Updated: 2026/01/22 21:21:50 by traomeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	a;
	int	s;
	int	r;

	a = 0;
	s = 1;
	r = 0;
	while (nptr[a] == 32 || (nptr[a] >= 7 && nptr[a] <= 13))
	{
		a++;
	}
	if (nptr[a] == '-' || nptr[a] == '+')
	{
		if (nptr[a] == '-')
			s *= -1;
		a++;
	}
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		r = r * 10 + (nptr[a] - 48);
		a++;
	}
	return (s * r);
}
