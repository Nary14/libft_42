/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: traomeli <traomeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:31:48 by traomeli          #+#    #+#             */
/*   Updated: 2026/01/23 00:44:32 by traomeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			o;
	unsigned char	*t;

	o = 0;
	t = (unsigned char *)s;
	while (o < n)
	{
		t[o] = 0;
		o++;
	}
}
