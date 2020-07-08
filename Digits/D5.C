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
  sum=sum+rem;
  n=n/10;
}
printf("Sum Of Digits Is: %d",sum);
}