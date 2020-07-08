#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,rem,num1,num2,lcm;
clrscr();

printf("Number1: & Number2:");
scanf("%d %d",&num1,&num2);

a=num1;
b=num2;

while(b!=0)
{
rem=a%b;
a=b;
b=rem;
}
lcm=(num1*num2)/a;
printf("LCM of %d & %d Is: %d",num1,num2,lcm);
}

