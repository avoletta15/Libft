#include <stddef.h>
void    *ft_memset(void *s, int a, size_t n)
{
	unsigned char	*M;

	M = (unsigned char *) s;
    while (n > 0)
	{
        *M++ = a;
		n--;
	}
	return(s);
}

/*#include <stdio.h>
int	main(void)
{
	char ptr[] = "rafael eh um fofo";
	ft_memset(ptr, 65, 6);
	printf("%s\n", ptr);
	return(0);
}*/