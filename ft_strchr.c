/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:14:03 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/17 10:43:50 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*str && *str!= c)
		str++;
	if (*str == c)
		return ((char *)&*str);
	else
		return (NULL);
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