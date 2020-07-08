#include<stdio.h>
#include<conio.h>

void main()
{
int n,j,i,num=1,step=1,de=9;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=2*n-1;i++)
{
  for(j=1;j<=step;j++)
  {
     printf("%d",num);
     num++;
  }
  if(i<n)
  {
    step+=1;
  }
  else
  {
    step-=1;
    num=num-de;
    de=de-2;
  }
  printf("\n");
}

}