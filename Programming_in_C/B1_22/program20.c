#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20],str2[20];
  int result;
  printf("Enter the string 1\n");
  scanf("%s",str1);
  
  printf("Enter the string 2\n");
  scanf("%s",str2);
  
  result=strcmp(str1,str2);
  
  if(result==0)
  {
    printf("Strings are equal");
  }
  else
  {
    printf("Strings are not equal");
  }
  return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc program20.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the string 1
Darshan
Enter the string 2
jagtap
Strings are not equalpl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.gcc program20.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the string 1
OM
Enter the string 2
OM
Strings are equal
*/
