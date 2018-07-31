#include <stdio.h>

int main() 
{
  char s;
  scanf("%d",&s);
  if((s>='a'&& s<='z')||(s>='A'&& s<='Z'))
   printf("this is alphabet",s);
  else
    printf("this is not a alphabet");
  return 0;
}
