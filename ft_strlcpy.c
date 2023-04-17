/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:27:17 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/17 09:12:24 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while ((src[i] != '\0') && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (len);
}

/*[fail]: your strlcpy copies while destsize is zero, or does not return the size of the string it tried to create
*/