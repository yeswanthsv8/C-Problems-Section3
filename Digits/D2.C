#include<stdio.h>
#include<conio.h>

void main()
{
int n,rem,d,flag=0,count=0;
clrscr();

printf("Number: &  Digit:");
scanf("%d %d",&n,&d);

while(n>=10)
{
  rem=n%10;
  if(rem==d)
  {
    flag=1;
    printf("Occurred.");
    count++;
  }
n=n/10;
}
if(flag==0)
{
  printf("Not Occurred.");
}
printf("\nOccurrence Is: %d",count);
}