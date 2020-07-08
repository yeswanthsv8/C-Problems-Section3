#include<stdio.h>
#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,star=9;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=2*n-1;i++)
{
  for(j=1;j<=star;j++)
  {
    printf("*");
  }
  printf("\n");
  if(i<n)
  {
    star-=2;
  }
  else
  {
    star+=2;
  }
}

}