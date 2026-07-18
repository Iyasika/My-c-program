#include<stdio.h>
int main()
{
  int a,b,add,sub,mul,div,mod;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("The addition is %d ",add);
printf("The subtraction is %d",sub);
printf("The multiplication is %d",mul);
printf("The division is %d",div);
printf("The modulo is %d",mod);
return 0;
}
