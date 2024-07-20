#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,c,d,e,f,s,A,P;
  printf("Enter first side of triangle: ");
  scanf("%d",&a);
  printf("Enter second side of triangle: ");
  scanf("%d",&b);
  printf("Enter third side of triangle: ");
  scanf("%d",&c);
  d= a*a;
  e= b*b;
  f= c*c;
  s= (a+b+c)/2;
  A= sqrt(s*(s-a)*(s-b)*(s-c));
  P= a+b+c;
  
  if(a==b && b==c)
  {
    printf("The triangle is Equilateral \n");
    printf("Area of the equilateral triangle is:%d \n",A);
    printf("Perimete of a triangle is:%d \n",P);
  }
  
  else if(d==e+f || e==f+d || f==d+e)
  {
    printf("The triangle is right angled \n");
    printf("Area of the equilateral triangle is:%d\n",A);
    printf("Perimete of a triangle is:%d \n",P);
  }
  
  else if(a==b || b==c || a==c)
  {
    printf("The triangle is isosceles \n");
    printf("Area of the equilateral triangle is:%d \n",A);
    printf("Perimete of a triangle is:%d \n",P);
  }
 
  return 0;
}

/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ gcc assignment4.c -lm
\pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1_22$ ./a.out
Enter first side of triangle: 5
Enter second side of triangle: 3
Enter third side of triangle: 4
The triangle is right angled 
Area of the equilateral triangle is:6
Perimete of a triangle is:12
*/

