import java.Scanner.util.*;
public class prime 
public static void main(String[]args)
{
int temp;
boolean isPrime=true;
Scanner s=new Scanner(System.in);
printf("enter the number");
 int num=s.nextInt();
 for(int i=0;i<num/2;i++)
 {
 temp=num/i;
if(temp==0)
{
isPrime=false;
break;
}
if(isPrime)
{
System.out.println(num+"is aprime num");
}else
{
System.out.println(num+"is not a prime num");
}
}
