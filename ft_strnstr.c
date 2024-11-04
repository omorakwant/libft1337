/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <odahriz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:56:04 by odahriz           #+#    #+#             */
/*   Updated: 2024/11/04 10:30:55 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t               i;
    const unsigned char *l;
    const unsigned char *b;

    l = (unsigned char)little;
    b = (unsigned char)big;
    i = 0;
    if (!l[i])
        return (b);
    while (i < len)
    {
        if (l[i] == b [i])
            return (b);
        i++;
    }
    
    
    return (NULL);
}
