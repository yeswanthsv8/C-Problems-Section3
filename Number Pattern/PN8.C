#include<stdio.h>
#include<conio.h>

void main()
{
int n,j,i,num=1,step=1;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=2*n-1;i++)
{
  for(j=1;j<=step;j++)
  {
     printf("%d",num);
  }
  if(i<n)
  {
    step+=1;
    num++;
  }
  else
  {
    step-=1;
    num--;
  }
  printf("\n");
}

}