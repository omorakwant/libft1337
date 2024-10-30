/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <odahriz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:05:11 by odahriz           #+#    #+#             */
/*   Updated: 2024/10/30 11:40:44 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
size_t     ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t  i;
    
    i = 0;
    if (n)
    {
        while (src[i] && i < n)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = 0;
    }
    while (src[i])
        i++;
    return (i);
}