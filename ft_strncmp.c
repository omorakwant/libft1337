/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odahriz <odahriz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:14:45 by odahriz           #+#    #+#             */
/*   Updated: 2024/11/01 10:46:20 by odahriz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i < n)
		{
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
