#include<stdio.h>
int main()
{
 int ch,a,b,c;
 char y,n,choice;
 do
 printf("Enter first number %d \n",a);
 scanf("%d",&a);
 printf("Enter second number %d \n",b);
 scanf("%d",&b);
 printf("Enter your choice: ");
 printf("1 for addition, 2 for substraction, 3 for multiplication, 4 for division");
 scanf("%d",&ch);
 
 
 switch(ch)
 {
   case1: c=a+b;
   printf("Addition of the numbers is:%d ",c);
   
   case2: c=a-b;
   printf("Substration of the numbers is: %d",c);
   
   case3: c=a*b;
   printf("Substration of the numbers is: %d",c);
   
   case4: c=a/b;
   printf("Substration of the numbers is: %d",c);
 
 }
 printf("Do you want to continue if yes then enter 'y' else enter 'n' ");
 scanf("%c",&choice);
 while(choice==1);
 printf("THANK YOU FOR USING");
 
 return 0;
}
