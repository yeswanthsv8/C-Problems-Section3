#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,k;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=5;i>=1;i--)
{
  for(j=1;j<=i;j++)
  {
    printf("*");
  }
  for(j=1;j<=n-i;j++)
  {
    printf(" ");
  }

  printf("\n");
}

}