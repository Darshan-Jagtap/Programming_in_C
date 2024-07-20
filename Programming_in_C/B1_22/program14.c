#include<stdio.h>
int main()
{
  int i;
  printf("Even Numbers are :");
  for(i=1;i<=20;i++)
  {
    if(i%2==0)
    {
    printf("%d,",i);
    }
  }
  
  return 0;
}
/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc program14.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Even Numbers are :2,4,6,8,10,12,14,16,18,20
*/
