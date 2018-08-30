#include<stdio.h>

int add(int,int);
int add(int a,int b)
{
return (a+b);
}

int main()
{
int a=0,b=0;

printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
printf("\n");
printf("The sum is %d",sum(a,b));
return 0;
}
