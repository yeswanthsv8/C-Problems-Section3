#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,k,n,space=5,star=1;
clrscr();

printf("Input:");
scanf("%d",&n);

for(i=1;i<=2*n+1;i++)
{
   for(j=1;j<=space;j++)
   {
     printf(" ");
   }
   for(k=1;k<=star;k++)
   {
     printf("*");
   }
   if(i<=n)
   {
      space-=1;
      star+=1;
   }
   else
   {
     space+=1;
     star-=1;
   }
   printf("\n");
}

}
