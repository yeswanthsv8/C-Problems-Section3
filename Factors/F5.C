#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sum=0;
clrscr();

printf("Number:");
scanf("%d",&n);

for(i=1;i<n;i++)
{
   if(n%i==0)
   {
      sum=sum+i;
   }
}
if(sum==n)
{
  printf("Perfect Number.");
}
else
{
  printf("Not Perfect Number.");
}

}