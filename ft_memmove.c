/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:12:41 by odahriz           #+#    #+#             */
/*   Updated: 2024/10/26 18:32:28 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char     *d;
    const unsigned char *s;

    if (dest == src || n == 0)
        return (dest);
    
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    if (d < s)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        d += n;
        s += n;
        while (n--)
            *(--d) = *(--s);
    }

    return (dest);
}
