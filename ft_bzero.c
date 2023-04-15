/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:07:50 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/15 17:41:30 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#/*include <stdio.h>
int	main(void)
{
	char ptr[] = "rafael eh um fofo";
	
	ft_bzero(ptr, 8);

	printf("RESULT: %s\n", ptr);
	
	return(0);
}*/