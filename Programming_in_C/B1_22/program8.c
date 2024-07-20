#include<stdio.h>
int main()
{
 char a,M;
 printf("Select M or F for your gender: ");
 scanf("%c",&a);
 
 switch(a)
 {
   case 'M':
   	printf("You are Male");
   break;
   
   case 'm':
   	printf("You are Male");
   break;
   
   case 'F':
   	printf("You are Female");
   break;
   
   case 'f':
   	printf("You are Female");
   break;
 
 default:
   printf("Sorry don't know your gender");
   
 }  
 return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Select M or F for your gender: f
You are Femalepl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Select M or F for your gender: M
You are Male
*/
