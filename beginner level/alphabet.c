#include <stdio.h>

int main() 
{
  char s;
  scanf("%d",&s);
  if((s>='a'&& s<='z')||(s>='A'&& s<='Z'))
   printf("Alphabet",s);
  else
    printf("No");
  return 0;
}
