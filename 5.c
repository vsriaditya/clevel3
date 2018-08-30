#include<stdio.h>

void compare(int,int,int);

void compare(int a,int b,int c)
{

if(a > b && a > c)
{
printf("a is bigger\n");
}
else if(b >a && b > c)
{
printf("b is bigger\n");
}
else if(c > a && c >b)
{
printf("c is bigger\n");
}
}

int main()
{
int a,b,c;
printf("Enter three numbers : ");
scanf("%d%d%d",&a,&b,&c);
compare(a,b,c);
return 0;
}
