#include<stdio.h>
#include<conio.h>

void main()
{
int n,count=0;
clrscr();

printf("Number:");
scanf("%d",&n);

while(n!=0)
{
  n=n/10;
  count++;
}
printf("Count Of Digits Is: %d",count);
}