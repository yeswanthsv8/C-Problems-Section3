#include<stdio.h>
#include<conio.h>

void main()
{
int n,num,flag=0;
clrscr();

printf("Input:");
scanf("%d",&num);
n=num;

while(num>1)
{
    if(num%2!=0)
    {
       flag=1;
       break;
    }
    else
    {
       num=num/2;
    }
}
if(flag==1)
{
  printf("%d is not Power of 2.",n);
}
else
{
  printf("%d is Power of 2.",n);
}

}

