#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20];
  int result;
  printf("Enter the string\n");
  scanf("%s",str1);
  
  result=strlen(str1);
  printf("Length of string is: %d",result);
  return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc program17.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the string
Darshan
Length of string is: 7
*/
