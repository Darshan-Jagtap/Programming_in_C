#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age:\n");
    scanf("%d",&a);
    
    if(a>18)
    {
      printf("You are eligible for voter ID card");
    }
    
    else{
      printf("You are not eligible for voter ID card");
    }
    return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc program6.c
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter your age:
19
You are eligible for voter ID cardpl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter your age:
5   
You are not eligible for voter ID cardpl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ 

*/
