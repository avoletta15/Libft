/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:35:19 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/15 17:46:51 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (src == NULL || dst == NULL)
		return (NULL);
	if (dst < src || dst >= (src + len))
	{
		while (len != 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	else
	{
		d += len - 1;
		s += len - 1;
		while (len != 0)
		{
			*d-- = *s--;
			len--;
		}
	}
	return (dst);
}

/*#include <stdio.h>
int main()
{
    char src[] = "Francisco Miguel da estrela inacio";
	char dest[] = "jgoaijgozigjgtyi.fytk.k.uhftozrigj<ogr";
	
    printf("RESULT: %s\n", ft_memmove(dest, src, 4));
    return 0;
}*/