/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <odahriz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:56:04 by odahriz           #+#    #+#             */
/*   Updated: 2024/11/05 11:43:30 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	 size_t i;
    size_t little_len;

    little_len = ft_strlen(little);
    if (little_len == 0)
        return ((char *)big);

    i = 0;
    while (big[i] != '\0' && len >= little_len)
    {
        if (ft_strncmp(&big[i], little, little_len) == 0)
            return ((char *)&big[i]);

        i++;
        len--;
    }
    return (NULL);
}
