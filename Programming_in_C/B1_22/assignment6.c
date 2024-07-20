#include<stdio.h>
int main()
{
  int n,i,mark,max=0,min=99,pcount=0,fcount=0;
  printf("Enter the number of students in a class: ");
  scanf("%d",&n);
  
  for(i=1; i<=n; i++)
  {
    printf("Enter mark of student %d: ",i);
    scanf("%d",&mark);
    
    if(mark>max)
    {
      max=mark;
    }
    if(mark<min)
    {
      min=mark;
    }
    if(mark>40)
    {
      pcount++ ;
    }
    if(mark<40)
    {
      fcount++ ;
    }
  }  
  printf("Maximum marks is: %d \n",max);
  printf("Minimum marks is: %d \n",min);
  printf("Number of students are passed is: %d \n",pcount);
  printf("Number of students are failed is: %d \n",fcount);
  
  return 0;
}
/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc assignment6.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the number of students in a class: 3
Enter mark of student: 20
Enter mark of student: 80
Enter mark of student: 57
Maximum marks is: 80 
Minimum marks is: 20 
Number of students are passed is: 2 
Number of students are failed is: 1
*/

/*
#include <stdio.h>
int main()
{ int i,n,m,passcount=0,failcount=0,min_marks=999,max_marks=-1;
 printf("Enter the number of students: ");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
   printf("Enter the marks of %d student: ",i);
   scanf("%d",&m);
   if(m>=35)
   {
   printf("You are pass\n");
   passcount++ ;
   }
   else
   {
   printf("You are fail\n");
   failcount++ ;
   }
   if(m<min_marks)
   {
     min_marks=m;
   }
   if(m>max_marks)
   {
     max_marks=m;
   }
 } 
   printf("Number of students passed: %d \n",passcount);
   printf("Number of students failed: %d \n",failcount);
   printf("Maximum marks are : %d \n",max_marks);
   printf("Minimum marks are : %d \n",min_marks);
   
 return 0;
 }

pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc assignment6.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the number of students: 5
Enter the marks of 1 student: 90
You are pass
Enter the marks of 2 student: 55
You are pass
Enter the marks of 3 student: 35
You are pass
Enter the marks of 4 student: 87
You are pass
Enter the marks of 5 student: 12
You are fail
Number of students passed: 4 
Number of students failed: 1 
Maximum marks are : 90 
Minimum marks are : 12

 */
