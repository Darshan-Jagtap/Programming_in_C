#include<stdio.h>
struct cust
{
  char name[20];
  int id;
  char gender[5];
  long int mobno;
}cust[20];

int main()
{
 int n;
 printf("Enter number of customers: \n");
 scanf("%d",&n);
 
 for(int i=1;i<=n;i++)
 {
   printf("Enter your name: \n");
   scanf("%s",cust[i].name);
   printf("Enter your id: \n");
   scanf("%d",&cust[i].id);
   printf("Enter your gender: \n");
   scanf("%s",cust[i].gender);
   printf("Enter your mobile no.: \n");
   scanf("%ld",&cust[i].mobno);
 }
 
 printf("Name\t City\t Gender\t Mobile no.\t \n");
 for(int i=1;i<=n;i++)
 {
   printf("%s\t %d\t %s\t %ld\t \n",cust[i].name, cust[i].id, cust[i].gender, cust[i].mobno);
 }
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc assignment8.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter number of customers: 
2
Enter your name: 
Darshan
Enter your id: 
22
Enter your gender: 
Male
Enter your mobile no.: 
90214799524
Enter your name: 
Om
Enter your id: 
21
Enter your gender: 
Male
Enter your mobile no.: 
9598654641
Name	 City	 Gender	 Mobile no.	 
Darshan  22	 Male	 90214799524	 
Om	 21	 Male	 9598654641
*/
