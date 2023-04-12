#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if(src == NULL)
		return(NULL);
	if(dst == NULL)
		return(NULL);
	if (dst < src || dst >= (src + len))
		while(len != 0)
		{
			*d++ = *s++;
			len--;
		}
	else
		{
			d += len - 1;
			s += len - 1;
			while (len != 0)
			{
				*d-- = *s--;
				len--;
			}
		}
	return(dst);
}

#include <stdio.h>
int main()
{
    char src[] = "abcdefghijklmnop";

    ft_memmove(&src[2], src, 5);
    printf("Result: %s\n", src);
    return 0;
}