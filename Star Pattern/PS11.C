#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,step=7,star=1;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=2*n-1;i++)
{
  for(j=1;j<=star;j++)
  {
    printf("*");
  }
  for(j=1;j<=step;j++)
  {
    printf(" ");
  }
  for(j=1;j<=star;j++)
  {
    if(j!=n)
    {
    printf("*");
    }
  }
  printf("\n");
  if(i<n)
  {
     star+=1;
     step-=2;
  }
  else
  {
     star-=1;
     step+=2;
  }
}

}