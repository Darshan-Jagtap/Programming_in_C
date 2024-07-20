#include<stdio.h>
int main()
{
  float r;
  float pi = 3.142;
  float c;
  printf("Enter value of radius :");
  scanf("%f",&r);
  c = pi*r*r;
  printf("Area of a circle is :%f",c);
  return 0;
}

/*
   pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc program4.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter value of radius :5
Area of a circle is :78.550003p
*/
