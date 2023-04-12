char  *strrchr(const char *s, int c)
{
  const char *str;
  int i;

  str = s;
  i = 0;
  while(str[i] != '\0') // quando crirar a biblio, so usar a strlen
    i++;
  while(str[i] != c && c >= 0)
    i--;
  if(str[i] == c)
    return((char *)&str[i]);
  else
    return(0);
}

#include <stdio.h>
int main()
{
  const char  *s = "Rafael eh muito chato";
  int c;

  c = 'R';
  printf("RESULT: %s\n", strrchr(s, c));
  return(0);
}