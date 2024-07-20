#include<stdio.h>
int main()
{ int n,i,a;
 
  printf("Enter the number for table:");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    a=n*i;
    printf("%d*%d=%d \n",n,i,a);
  }
  

  return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc program13.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter the number for table:4
4*1=4 
4*2=8 
4*3=12 
4*4=16 
4*5=20 
4*6=24 
4*7=28 
4*8=32 
4*9=36 
4*10=40 
*/
