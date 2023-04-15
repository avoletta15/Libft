/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:14:03 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/14 16:24:40 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	const char	*str;
	int			i;

	i = 0;
	str = s;
	while (str[i] != c && c >= 0)
	i++;
	if (str[i] == c)
		return ((char *)&str[i]);
	else
		return (0);
}

/*#include <stdio.h>
int main()
{
  const char  *s = "aaaaaabcccccc";
  int c;

  c = 'b';
  printf("RESULT: %s\n", strchr(s, c));
  return(0);
}*/