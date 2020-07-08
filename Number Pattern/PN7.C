#include<stdio.h>
#include<conio.h>

void main()
{
int n,j,i;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  for(j=1;j<=n-i;j++)
  {
     printf(" ");
  }
  for(j=1;j<=i;j++)
  {
     printf("%d",i);
     printf(" ");
  }
  printf("\n");
}

}