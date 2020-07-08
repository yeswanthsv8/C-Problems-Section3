#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,j;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  for(j=1;j<=n+1;j++)
  {
     if(i%2==0)
     {
       if(j==1)
       {
	  printf("%d",i+1);
       }
       else
       {
	  printf("%d",i);
       }
     }
     else
     {
       if(j<=n)
       {
	 printf("%d",i);
       }
       else
       {
	 printf("%d",i+1);
       }
     }
  }

  printf("\n");
}

}
