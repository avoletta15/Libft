/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:17:34 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/15 19:07:47 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	
	i = 0;
	j = ft_len(s1);
	if (!set)
		return((char *)s1);
	str = (char *)malloc(j * sizeof(char + 1));
	if (!str)
		return (NULL);
	while (str[1] == set)
		i++;
	while (str[j] == set)
		j--;
	while (str[i] != str[j])
	{
		str[i] = s[i];
		i++;
	}
	i++;
	str[i] = '\0';
	return (str);	
}

/*int	main()
{
	char const	s1[] = "...AAA..AA...";
	char const	set = ".";
	
	printf("RESULT: %c\n", ft_strtrim(s1, set));

	retunr(0);
}*/