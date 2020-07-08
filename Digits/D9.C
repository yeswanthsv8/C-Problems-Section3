#include<stdio.h>
#include<conio.h>

void main()
{
int n,num,sum=0,rem,cube=0;
clrscr();

printf("Number:");
scanf("%d",&n);
num=n;

while(n!=0)
{
  cube=0;
  rem=n%10;
  cube=rem*rem*rem;
  sum=sum+cube;
  n=n/10;
}

if(num==sum)
{
  printf("Armstrong Number.");
}
else
{
  printf("Not Armstrong Number.");
}


}