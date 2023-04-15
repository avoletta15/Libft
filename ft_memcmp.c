/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:20:23 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/14 16:24:52 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	i = 0;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (s1[i] != s2[i])
			return (s1[1] - s2[i]);
		i++;
		n--;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
  char  str1[10] = "c";
  char  str2[10] = "b";

  printf("RESULT: %d\n", ft_memcmp(str1, str2, 10));
  return(0);
}*/