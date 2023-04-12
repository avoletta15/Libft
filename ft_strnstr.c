#include <stddef.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	h;
	int	n;
	const char	*hs;
	const char	*nd;

	h = 0;
	n = 0;
	hs = haystack;
	nd = needle;
	if(nd[n] == '\0')
		return((char *)hs);
	while(hs && (h + n) < len) 
	{
		n = 0;
		while(hs[h + n] != nd[n] && (h + n) < len) 
		{
			h++; 
			if (hs[h + n] == nd[n]) 
				n++;
			while(hs[h] == nd[n] && h < len)
			{
				h++;
				n++;
				if(nd[n] == '\0')
				{
					n--;
					return((char *)&hs[h - n]);
				}
			}
		}
	}
	return(0);
}

#include <stdio.h>
int	main()
{
	char *H;
	char *N;

	H =  "aaaa bbb cccc";
	N = "bbb";
	printf("Teste Result: %s\n",ft_strnstr(H, N, 9));
	return(0);
}