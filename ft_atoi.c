/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marioliv <marioliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:06:40 by marioliv          #+#    #+#             */
/*   Updated: 2023/04/15 16:49:51 by marioliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *a)
{
	int	i;
	int	m;
	int	n;

	i = 0;
	m = 0;
	n = 0;
	while ((a[i] >= 9 && a[i] <= 13) || a[i] == ' ')
		i++;
	while (a[i] == '-' || a[i] == '+')
	{
		if (a[i] == '-')
			m++;
		i++;
	}
	while (a[i] >= '0' && a[i] <= '9')
	{
		n = n * 10;
		n = n + a[i] - 48;
		i++;
	}
	if (m % 2 != 0)
		return (-n);
	else
		return (n);
}

/*#include <stdio.h>
int	main()
{
	char	*str = "5";
	
	printf("RESULT: %d\n", (ft_atoi(str)));
	
	return (0);
}*/