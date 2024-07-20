#include<stdio.h>
int main()
{
  float principle, time, rate, SI;
  printf("Enter the principle amount :");
  scanf("%f",&principle);
  printf("Enter the time :");
  scanf("%f",&time);
  printf("Enter the rate :");
  scanf("%f",&rate);
  
  SI= (principle*time*rate)/100;
  
  printf("Simple Interest is :%f",SI);
  return 0;
}
