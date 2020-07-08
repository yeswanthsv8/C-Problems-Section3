#include<stdio.h>
#include<conio.h>

void main()
{
int n,rem;
clrscr();

printf("Number:");
scanf("%d",&n);

while(n>=10)
{
  n=n/10;
}
printf("First Digit Is: %d",n);
}