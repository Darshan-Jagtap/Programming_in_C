#include<stdio.h>
int main()
{
  int A,B;
  printf("Enter the value of A :");
  scanf("%d",&A);
  printf("Enter the value of B :");
  scanf("%d",&B);
  if (A==B)
    {
      printf("Both A and B have same values");
     }
  if (A>B)
    {
     printf("A is greater"); 
     }
  else
     {
      printf("B is greater");
      }   
  return 0;
}

/*
  pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the value of A :6
Enter the value of B :9
B is greater
*/
