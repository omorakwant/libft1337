/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <odahriz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:45:49 by odahriz           #+#    #+#             */
/*   Updated: 2024/11/02 12:17:27 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;

	src = (const unsigned char *)s;
	while (n)
	{
		if (*src == (unsigned char)c)
			return ((void *)src);
		src++;
		n--;
	}
	return (NULL);
}
