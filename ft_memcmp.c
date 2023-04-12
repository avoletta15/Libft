#include <stddef.h>
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
  unsigned char   *s1;
  unsigned char   *s2;
  int i;

  s1 = (unsigned char *) str1;
  s2 = (unsigned char *) str2;
  i = 0;
  if(n == 0)
    return(0);
  while (s1 && n != 0)
  {
    if(s1[i] != s2[i])
      return(s1[i] - s2[i]);
    i++;
    n--;
  }
  if(s1[i] == '\0')
    return(s1[i] - s2[i]);
  return(0);
}

#include <stdio.h>
int main()
{
  char  str1[10] = "m";
  char  str2[10] = "o";

  printf("RESULT: %d\n", ft_memcmp(str1, str2, 10));
  return(0);
}