/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <odahriz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:20:11 by odahriz           #+#    #+#             */
/*   Updated: 2024/11/08 10:37:55 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*l;

	l = NULL;
	while (*s)
	{
		if (*s == (char)c)
			l = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)l);
}
