/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:02:31 by odahriz           #+#    #+#             */
/*   Updated: 2024/10/24 13:08:56 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int v, size_t c)
{
	int	i;

	(char) ptr;
	(unsigned char) v;
	i = 0;
	while (ptr[i])
	{
		while (i < c)
			ptr[i] = v;
	}
	i++;
	return (ptr);
}
