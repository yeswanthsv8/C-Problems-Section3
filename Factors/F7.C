#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int n,i,eq;
float m;
clrscr();

printf("Number:");
scanf("%d",&n);

m=sqrt(n);
eq=(int)m;

if(m==eq)
{
  printf("Perfect Square.");
}
else
{
  printf("Not Perfect Square.");
}

}