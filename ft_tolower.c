int	ft_tolower(int a)
{
	if(a >= 'A' && a <= 'Z')
			a = a + 32;
	return(a);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_tolower('A'));
	return(0);
}