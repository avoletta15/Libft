#include <stddef.h>

void  *ft_memchr(const void *s, int c, size_t n)
{
  unsigned char *str;
  int i;

  str = (unsigned char *) s;
  i = 0;
  while(n != 0 && str[i] != c)
  {
    i++;
    n--;
  }
   if(str[i] == c)
    return((char *)&str[i]);
  else
    return(0);
}

#include <stdio.h>
int main()
{
  const char  *s = "maria luisa avoletta";
  int c;

  c = 'l';
  printf("RESULT: %s\n", ft_memchr(s, c, 6));
  return(0);
}