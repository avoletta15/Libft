/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:35:03 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/17 19:41:25 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			h;
	size_t			n;
	char	*hs;
	char	*nd;

	h = 0;
	n = 0;
	hs = (char *) haystack;
	nd = (char *) needle;
	if (nd[n] == '\0')
			return (hs);
	if (len != 0 && hs)
	{
		while (hs[h + n] != nd[n] && (h + n) != len && hs)
			h++;
		if (hs[h + n] == nd[n])
		{
			while (hs[h] == nd[n] && h != len)
			{
				h++;
				n++;
				if (nd[n] == '\0')
					return (&hs[h - n]);
			}
		}
	}
	return (NULL);
}

/*char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	i = 0;
	if (len == 0 && !big)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && len > i)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}*/