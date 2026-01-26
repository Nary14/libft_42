/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: traomeli <traomeli@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 00:52:52 by traomeli          #+#    #+#             */
/*   Updated: 2026/01/23 00:52:57 by traomeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (little[b] == '\0')
		return (char *)(big);
	while (big[a] != '\0' && a <= len)
	{
		
		while (little[b] != '\0'
			&& big [a + b] == little[b]
			&& (a + b) < len)
		{
			b++ ;
			if (little[b] == '\0')
				return ((char *)(big + a));
		}
		a++ ;
	}
	return (NULL);
}
