/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: traomeli <traomeli@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 00:57:28 by traomeli          #+#    #+#             */
/*   Updated: 2026/01/22 18:13:58 by traomeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	o;

	o = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[o] != '\0' && o < size - 1)
	{
		dst[o] = src[o];
		o++;
	}
	dst[o] = '\0';
	return (ft_strlen(src));
}
