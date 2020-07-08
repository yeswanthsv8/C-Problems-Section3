#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,sta,stp,j,sum=0;
clrscr();

printf("Start: & Stop: ");
scanf("%d %d",&sta,&stp);

for(i=sta+1;i<stp;i++)
{
  sum=0;
  for(j=1;j<i;j++)
  {
    if(i%j==0)
    {
      sum=sum+j;
    }
  }
  if(sum==i)
  {
    printf("%d ",i);
  }

}


}

