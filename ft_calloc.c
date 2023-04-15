/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:14:15 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/15 17:45:07 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;
	
	if (size == 0)
		return (NULL);
	else
		ptr = (char *)malloc(n * size);
	ft_bzero (ptr, n);
	return (ptr);
}

/*#include <stdio.h>
int	main()
{
	printf("RESULT: %p\n", ft_calloc(5, 2));
	return (0);
}*/