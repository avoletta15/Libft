/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:35:03 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/15 18:11:56 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			h;
	size_t			n;
	const char	*hs;
	const char	*nd;

	h = 0;
	n = 0;
	hs = haystack;
	nd = needle;
	if (nd[n] == '\0')
		return ((char *)hs);
	while (hs && (h + n) < len)
	{
		n = 0;
		while (hs[h + n] != nd[n] && (h + n) < len)
		{
			h++;
			if (hs[h + n] == nd[n])
				n++;
			while (hs[h] == nd[n] && h < len)
			{
				h++;
				n++;
				if (nd[n] == '\0')
				{
					n--;
					return ((char *)&hs[h - n]);
				}
			}
		}
	}
	return (0);
}

/*#include <stdio.h>
int	main()
{
	char *H;
	char *N;

	H =  "aaaa bbb cccc";
	N = "bbb";
	printf("Teste Result: %s\n",ft_strnstr(H, N, 9));
	return(0);
}*/