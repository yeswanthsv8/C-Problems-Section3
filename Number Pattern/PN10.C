#include<stdio.h>
#include<conio.h>

void main()
{
int n,j,i,k,num=1;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  for(k=1;k<=n-i;k++)
  {
    printf(" ");
  }
  for(j=1;j<=i;j++)
  {
    if(j==1||i==1||j==i)
    {
       num=1;
       printf("%d",num);
       printf(" ");
    }
    else
    {
       num=num*(i-j+1)/(j-1);
       printf("%d",num);
       printf(" ");
    }
  }
  printf("\n");
}
}