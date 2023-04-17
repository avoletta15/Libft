/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:29:34 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/17 20:34:39 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (i < start)
		i++;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}


/*Test 2:
    if (!(strsub = ft_substr(str, 7, 10)))
        ft_print_result("NULL");
    else
        ft_print_result(strsub);
    if (str == strsub)
        ft_print_result("\nA new string was not returned");
Expected (cat -e test02.output):
psum dolor
Your result (cat -e user_output_test02):
lorem i*/
