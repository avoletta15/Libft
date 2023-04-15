/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:37:55 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/14 16:24:12 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	const char	*str;
	int			i;
	str = s;
	i = 0;
	while (str[i] != '\0')/*quando criar a biblio, so usar a strlen*/
		i++;
	while (str[i] != c && c >= 0)
		i--;
	if (str[i] == c)
		return ((char *)&str[i]);/* (char *) str + i --> Tais // o Rafa tem um outro jeito*/
	else
		return (0);
}

/*#include <stdio.h>
int main()
{
  const char  *s = "Rafael eh muito chato";
  int c;

  c = 'R';
  printf("RESULT: %s\n", strrchr(s, c));
  return(0);
}*/