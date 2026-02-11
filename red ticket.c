#include <stdio.h>
int main() 
{
 int a,b,c;
 printf("enter a value is A:");
 scanf("%d",&a);
 printf("enter a value is B:");
 scanf("%d",&b);
 printf("enter a value is c:");
 scanf("%d",&c);
 if(a==2 && b==2 && c==2)
 {
     printf("10");
 }
 else if (a==b && b==c && c==a)
{
    printf("5");
}
 else if (b!=a && c!=9)
 {
     printf("1");
      }
      else
      {
          printf("0");
      }
}
