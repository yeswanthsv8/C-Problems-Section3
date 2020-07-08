#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int n,i,eq,sta,stp;
float m;
clrscr();

printf("Start: & Stop: ");
scanf("%d %d",&sta,&stp);

printf("Perfect Square Bt %d & %d Is:",sta,stp);
for(i=sta;i<=stp;i++)
{
  m=sqrt(i);
  eq=(int)m;

  if(m==eq)
  {
    printf("%d ",i);
  }

}

}