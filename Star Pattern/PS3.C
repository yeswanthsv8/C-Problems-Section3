#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,step=1;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  for(j=1;j<=n-i;j++)
  {
    printf(" ");
  }

  for(j=1;j<=step;j++)
  {
    printf("*");
  }
  printf("\n");
  step+=2;
}

}