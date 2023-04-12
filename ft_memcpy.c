#include <stddef.h>

int	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{	
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *) src;
	d = (unsigned char *) dst;
	if(src == NULL)
		return(0);	
	while (n != 0)
	{
		*d++ = *s++;
		n--;
	}
	return(dst);
}

#include <stdio.h>
int main()
{
    char *src = NULL;
    char dest[20];

    ft_memcpy(dest, src, 5);

    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);

    return 0;
}