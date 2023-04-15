/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:33:43 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/14 16:24:49 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	if (src == NULL)
		return (0);
	while (n != 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}

/*#include <stdio.h>
int main()
{
    char	src[20] = "source";
    char	dest[20] = "destino";

    printf("RESULT: %s\n", ft_memcpy(dest, src, 5));
    return 0;
}*/