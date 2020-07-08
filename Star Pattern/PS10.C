#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,step=7;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  for(j=1;j<=i;j++)
  {
    printf("*");
  }
  for(j=1;j<=step;j++)
  {
    printf(" ");
  }
  for(j=1;j<=i;j++)
  {
    if(j!=n)
    {
      printf("*");
    }
  }
  printf("\n");
  step-=2;
}

}