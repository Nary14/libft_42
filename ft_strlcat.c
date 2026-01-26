/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: traomeli <traomeli@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 00:46:22 by traomeli          #+#    #+#             */
/*   Updated: 2026/01/22 21:31:12 by traomeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	o;
	size_t	len_dest;
	size_t	len_srcs;

	o = 0;
	len_dest = ft_strlen(dst);
	len_srcs = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_srcs);
	while (src[o] != '\0' && o < (size - len_dest - 1))
	{
		dst[len_dest + o] = src[o];
		o++;
	}
	dst[len_dest + o] = '\0';
	return (len_dest + len_srcs);
}
