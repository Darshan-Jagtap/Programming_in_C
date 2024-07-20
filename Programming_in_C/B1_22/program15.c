#include <stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    printf("*");
    printf("\n"); 
  }
  return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc program15.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
*
**
***
****
*****

*/
