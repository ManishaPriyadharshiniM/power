# power
#include<stdio.h>
#include<conio.h>
void main()
{
int b,e;
long long r=1;
printf("enter the base number");
scanf("%d",&b);
printf("enter the exponent number");
scanf("%d",&e);
while (e!=0)
{
r*=b;
--e;
}
printf("answer is %lld",r);
return 0;
}
