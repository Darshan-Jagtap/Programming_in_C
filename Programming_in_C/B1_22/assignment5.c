#include <stdio.h>
int main()
{ int i,n,m,sum=0,avg,s;
 printf("Enter the number of subjects:\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
   printf("Enter the marks of %d subject:",i);
   scanf("%d",&m);
   sum=sum+m;
 }
 printf("Sum of all subjects are:%d",sum);
 
 avg=sum/n;
 printf("\nAverage is :%d",avg);
 return 0;
}
/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc assignment5.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the number of subjects:
3
Enter the marks of 1 subject:25
Enter the marks of 2 subject:45
Enter the marks of 3 subject:35
Sum of all subjects are:105
Average is :35
*/
