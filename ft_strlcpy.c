#include <stddef.h>

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if(dstsize == 0)
		return(ft_strlen(src));
	while (src[i] < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(ft_strlen(src));
}