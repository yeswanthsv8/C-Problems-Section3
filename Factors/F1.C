#include<stdio.h>
#include<conio.h>

void main()
{
int i,num;
clrscr();

printf("Number:");
scanf("%d",&num);

printf("Factors:");
for(i=1;i<=num;i++)
{
  if(num%i==0)
  {
    printf("%d ",i);
  }
}

}