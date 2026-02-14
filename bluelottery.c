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
  int ab=a+b;
  int bc=b+c;
   int ca=c+a;
   if (ab==10 || bc==10 || ca==10)
   {
       printf("10");
      
   }
   else if(a>10 || b>10 || c>10)
   { 
       printf("5");
   }
   else
   { 
       printf("0");
   }
}