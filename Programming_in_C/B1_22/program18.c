#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20],str2[20];
  
  printf("Enter the string 1\n");
  scanf("%s",str1);
  
  printf("Enter the string 2\n");
  scanf("%s",str2);
  
  strcpy(str1,str2);
  
  printf("string 1 is %s \n",str1);
  printf("string 2 is %s \n",str2);
  return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc program18.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the string 1
Darshan
Enter the string 2
Jagtap
string 1 is Jagtap 
string 2 is Jagtap
*/
