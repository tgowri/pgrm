#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int low,high,rem,result=0,number,value;
clrscr();
scanf("%d%d",&low,&high);
number=low;
value=number;
while(value!=0)
{
value=value/10;
n++;
}
while(low<high)
{
while(value!=0)
{
rem=value%10;
result=result+pow(rem,n);
value=value/10;
}
if(result==number)
{
printf("%d",result);
}
}
