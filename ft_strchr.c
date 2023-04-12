char  *strchr(const char *s, int c)
{
  const char *str;
  int i;

  i = 0;
  str = s;
  while(str[i] != c && c >= 0)
    i++;
  if(str[i] == c)
    return((char *)&str[i]);
  else
    return(0);
}

#include <stdio.h>
int main()
{
  const char  *s = "aaaaaabcccccc";
  int c;

  c = 'b';
  printf("RESULT: %s\n", strchr(s, c));
  return(0);
}