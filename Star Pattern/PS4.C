#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,k,step=9;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=n;i>=1;i--)
{
  for(k=1;k<=n-i;k++)
  {
    printf(" ");
  }

  for(j=1;j<=step;j++)
  {
    printf("*");
  }
  printf("\n");
  step-=2;
}

}