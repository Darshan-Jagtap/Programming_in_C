#include<stdio.h>
int main()
{
  float A;
  float B;
  float C;
  printf("Enter a number A :");
  scanf("%f",&A);
  printf("Enter a number B :");
  scanf("%f",&B);
  C = A+B;
  printf("Addition of a numbers is :%f",C);
  return 0;
}

/*
  pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc program3.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter a number A :5
Enter a number B :7
Addition of a numbers is :12.000000pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC
*/
