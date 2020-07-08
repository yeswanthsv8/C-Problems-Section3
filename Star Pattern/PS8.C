#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
int n,i,j,step=1;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=2*n-1;i++)
{
  for(j=1;j<=abs(n-i);j++)
  {
    printf(" ");
  }
  for(j=1;j<=step;j++)
  {
    printf("*");
  }
  printf("\n");
  if(i<n)
  {
    step+=2;
  }
  else
  {
    step-=2;
  }
}

}