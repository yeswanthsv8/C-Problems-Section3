#include<stdio.h>
#include<conio.h>

void main()
{
int n,num,sum=0,rem;
clrscr();

printf("Number:");
scanf("%d",&n);
num=n;

while(n!=0)
{
  rem=n%10;
  sum=sum*10+rem;
  n=n/10;
}

if(num==sum)
{
  printf("Palindrome.");
}
else
{
  printf("Not Palindrome.");
}


}