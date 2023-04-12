int	ft_toupper(int a)
{
	if(a >= 'a' && a <= 'z')
			a = a - 32;
	return(a);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_toupper('a'));
	return(0);
}