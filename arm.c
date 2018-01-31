#include<stdio.h>
void main()
{
int a1,a2,a3,d,e,f,g,h;
printf("enter the number to print armstrong number \n");
scanf("%d%d%d",&a1,a2,a3);
d=a1*a1*a1;
e=a2*a2*a2;
f=a3*a3*a3;
h=d+e+f;
g=(a1*100)+(a2*10)+(a3*1);
if(g==h)
{
printf("%d\n"=armstrong number);
}
else
{
printf("not armstrong number\n");
}
getch();
}
