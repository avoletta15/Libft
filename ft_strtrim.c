/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:17:34 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/17 20:23:15 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	
	i = 0;
	j = ft_strlen(s1);
	if (!set)
		return((char *)s1);
	str = (char *)malloc(j * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (str[i] != *set)
		i++;
	while (j > i && str[j] != *set)
		j--;
	while (str[i] != str[j])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);	
}
