#include<stdio.h>
#include<conio.h>

void main()
{
int i,sta,stp,j,count=0;
clrscr();

printf("Start: & Stop:");
scanf("%d %d",&sta,&stp);

printf("Prime Number Bt %d & %d Is:",sta,stp);

for(i=sta+1;i<stp;i++)
{
  count=0;
  for(j=1;j<=i;j++)
  {
    if(i%j==0)
    {
      count++;
    }
  }
  if(count==2)
  {
     printf("%d\t",i);
  }
}

}