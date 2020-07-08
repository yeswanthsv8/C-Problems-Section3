#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,k,nh,spc=0,prt=8,num=1,in;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  if(i>=3)
  {
     in=1;
     if(i==4)
     {
       in=3;
     }
     nh=(prt*2)+i+in;
  }
  else
  {
    in=0;
    nh=(prt*2)+i+in;
  }

  for(j=1;j<=spc;j++)
  {
     printf(" ");
  }
  for(k=1;k<=prt;k++)
  {
     if(k<=(prt/2))
     {
	printf("%d",num);
	num++;
     }
     else
     {
	printf("%d",nh);
	nh++;
     }
  }
  printf("\n");
  prt-=2;
  spc++;

}

}