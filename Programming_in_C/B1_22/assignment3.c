#include <stdio.h>
int main()
{
  float bs,hra,da,gs;
  printf("Enter your basic salary:");
  scanf("%f",&bs);
  
  if(bs<=15000)
  {
    hra=bs*10/100;
    da=bs*12/100;
  }
  
  else if(bs>15000 && bs<=20000)
  {
     hra=bs*10/100;
     da=bs*20/100;
  }
  
  else if(bs>20000)
  {
     hra=bs*20/100;
     da=bs*30/100;
  }
  
  else
  { 
   printf("sorry");
  }
  
   gs=bs+hra+da;
   printf("Gross salary is: %f",gs);
  return 0;
}

/*
 pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc assignment3.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter your basic salary:60000
Gross salary is: 90000.000000pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$
*/
