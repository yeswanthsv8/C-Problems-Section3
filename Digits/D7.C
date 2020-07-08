#include<stdio.h>
#include<conio.h>

void main()
{
int n,sum=0,rem;
clrscr();

printf("Number:");
scanf("%d",&n);

while(n!=0)
{
  rem=n%10;
  sum=sum*10+rem;
  n=n/10;
}
printf("Reverse Is: %d",sum);
}