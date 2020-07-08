#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j,num,step=1;
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
      if(i==1||j==1||j==step)
      {
	 num=1;
      }
      else
      {
	 if(j<=i)
	  num++;
	 else
	   num--;
      }
      printf("%d",num);
  }
  printf("\n");
  step+=2;
}

}
