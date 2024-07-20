#include<stdio.h>
#include<string.h>
int main()
{ 
  char str1[20],str2[20];
  int result,choice;
  printf("Enter the string 1\n");
  scanf("%s",str1);
  
  printf("Enter the string 2\n");
  scanf("%s",str2);
  
  printf("Which operation would you like to do\n");
  printf("Choose 1:string length 2:string copy 3:string concatenation 4:string compare \n");
  scanf("%d",&choice);
  
  switch(choice)
  {
  
  case 1:
   result=strlen(str1);
  printf("Length of string is: %d",result);
  break;
  
  case 2:
  strcpy(str1,str2);
  printf("string 1 is %s \n",str1);
  printf("string 2 is %s \n",str2);
  break;
  
  case 3:
  strcat(str1,str2);
  printf("string 1 is %s \n",str1);
  printf("string 2 is %s \n",str2);
  break;
  
  case 4:
  result=strcmp(str1,str2);
  if(result==0)
  {
    printf("Strings are equal");
  }
  else
  {
    printf("Strings are not equal");
  }
  break;
  
}
  
  return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc assignment7.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the string 1
nashik
Enter the string 2
mumbai
Which operation would you like to do
Choose 1:string length 2:string copy 3:string concatenation 4:string compare 
1
Length of string is: 6pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./agcc assignment7.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the string 1
nashik 
Enter the string 2
mumbai
Which operation would you like to do
Choose 1:string length 2:string copy 3:string concatenation 4:string compare 
2
string 1 is mumbai 
string 2 is mumbai 
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc assignment7.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the string 1
nashik
Enter the string 2
mumbai
Which operation would you like to do
Choose 1:string length 2:string copy 3:string concatenation 4:string compare 
3
string 1 is nashikmumbai 
string 2 is mumbai 
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc assignment7.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the string 1
nashik
Enter the string 2
mumbai
Which operation would you like to do
Choose 1:string length 2:string copy 3:string concatenation 4:string compare 
4
Strings are not equal
*/
