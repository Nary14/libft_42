/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: traomeli <traomeli@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:14:53 by traomeli          #+#    #+#             */
/*   Updated: 2026/01/22 21:27:55 by traomeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				o;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	if (c == '\0')
	{
		o = ft_strlen(s);
		return ((char *)&s1[o]);
	}
	o = 0;
	while (s[o] != '\0')
	{
		if (s[o] == (char)c)
		{
			return ((char *)&s1[o]);
		}
		o++;
	}
	return (NULL);
}
