#include<stdio.h>
int main()
{
  int a;
  printf("Enter a number from 1 to 7 to know the day: ");
  scanf("%d",&a);
  
  switch(a)
  {
    case 1: 
        printf("Day is Sunday \n");
        printf("Good Day");
    break;
    
    case 2: 
    	printf("Day is Monday \n");
    	printf("Good Day");	
    break;
    
    case 3: 
        printf("Day is Tuesday \n");
        printf("Good Day");
    break;
    
    case 4: 
    	printf("Day is Wednesday \n");
    	printf("Good Day");	
    break;
    
    case 5: 
        printf("Day is Thursday \n");
        printf("Good Day");
    break;
    
    case 6: 
    	printf("Day is Friday \n");
    	printf("Good Day");	
    break;
    
    case 7: 
        printf("Day is Saturday \n");
        printf("Good Day");
    break;
    
    default:
    printf("Please choose number between 1 to 7");
  }
  
 return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter a number from 1 to 7 to know the day: 2
Day is Monday 
Good Daypl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter a number from 1 to 7 to know the day: 9
Please choose number between 1 to 7
*/
