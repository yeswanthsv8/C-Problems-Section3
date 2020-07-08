#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,count=0;
clrscr();

printf("Number:");
scanf("%d",&n);

printf("Prime Factors Is:");

for(i=1;i<=n;i++)
{
   count=0;
   if(n%i==0)
   {
      for(j=1;j<=i;j++)
      {
	 if(i%j==0)
	 {
	   count++;
	 }
      }
      if(count==2)
      {
	 printf("%d ",i);
      }
   }
}

}