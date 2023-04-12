char  *strrchr(const char *s, int c)
{
  const char str;
  int i;

  str = (const char *) s;
  i = 0;
  while(str[i] != '\0') // quando crirar a biblio, so usar a strlen
    i++;
  while(str[i] != c && c >= 0)
    i--;
  if(str[i] == c)
    return(str[i]);
  else
    return(NULL);
}

#include <stdio.h>
int main()
{
  const char  *s = "maria top";
  int c;

  c = 'a';
  printf("RESULT: %s\n", strrchr(s, c));
  return(0);
}