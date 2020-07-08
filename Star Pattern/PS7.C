#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,step=1;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=2*n-1;i++)
{
  for(j=1;j<=step;j++)
  {
    printf("*");
  }
  printf("\n");
  if(i<n)
  {
    step+=1;
  }
  else
  {
    step-=1;
  }
}

}