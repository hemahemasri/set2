#include<stdio.h>
void main()
{
int n1,n2,n3,a,b,c;
printf("enter the number to print armstrong number \n");
scanf("%d%d%d",&n1,n2,n3);
a=n1*n1*n1;
b=n2*n2*n2;
c=n3*n3*n3;
d=a+b+c;
x=(n1*100)+(n2*10)+(n3*1);
if(x==d)
{
printf("%d\n"=armstrong number);
}
else
{
printf("not armstrong number\n");
}
getch();
}
