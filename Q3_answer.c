#include<stdio.h>
int main ()
{
	float  a,b,c;
   printf("enter the three sides:");
   scanf("%f %f %f" ,&a,&b,&c);
	if(a+b>c||b+c>a||c+a>b)
{
   printf("\n1");}
	else
{
   printf("0");}

return 0;
}
