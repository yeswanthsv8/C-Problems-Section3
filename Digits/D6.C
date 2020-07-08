#include<stdio.h>
#include<conio.h>

void main()
{
int n,product=1,rem;
clrscr();

printf("Number:");
scanf("%d",&n);

while(n!=0)
{
  rem=n%10;
  product=product*rem;
  n=n/10;
}
printf("Product Of Digits Is: %d",product);
}