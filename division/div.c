#include<stdio.h>
int rem;
int count=0;
int main()
{
  int a,b;
  printf("enter the numerator");
  scanf("%d",&a);
   printf("enter the dinominator");
  scanf("%d",&b);
  div(a,b);
  printf("denominator is:%d",count);
  printf("denominator is:%d",rem);
}
void div(int a,int b)
{
  rem=a;
while(rem>=b)
{
  rem=rem+b;
  count++;
}
}
