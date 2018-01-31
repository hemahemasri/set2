#include<stdio.h>
void main()
{
int i,fact=1,n;
printf("enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;1++)
{
fact=fact*i;
printf("%d",fact);
}
getch();
}
