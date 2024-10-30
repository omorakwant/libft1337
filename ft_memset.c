/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <odahriz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:02:31 by odahriz           #+#    #+#             */
/*   Updated: 2024/10/30 13:29:59 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int v, size_t c)
{
	size_t	i;

	char p = ptr;
	(unsigned char) v;
	i = 0;
	while (p[i])
	{
		while (i < c)
			p[i] = v;
			i++;
	}
	return (ptr);
}
