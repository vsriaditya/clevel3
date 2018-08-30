#include<stdio.h>

void compare(int a,int b);
void compare(int a,int b)
{
if(a > b)
{
printf("a is bigger\n");
}
else
{
printf("b is bigger\n");
}
}

int main()
{
int a,b;
printf("Enter two numbers : ");
scanf("%d%d",&a,&b);
printf("\n");
compare(a,b);
return 0;
}
