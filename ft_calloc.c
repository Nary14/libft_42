/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: traomeli <traomeli@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:23:19 by traomeli          #+#    #+#             */
/*   Updated: 2026/01/22 18:12:38 by traomeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*malokco;
	size_t	o;

	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	o = (nmemb * size);
	if (size < 0)
		return (NULL);
	malokco = malloc(o);
	if (!malokco)
		return (NULL);
	ft_bzero(malokco, o);
	return (malokco);
}
