#include<stdio.h>


int main ()
{
  
  int num, reverse = 0, rem;
  printf("enter the number");
  scanf("%d",&num);
  printf("The number is: %d\n",num);
  
 
  
    while(num != 0)
    {
      rem = num % 10;
      reverse = reverse * 10 + rem;
      num /= 10;
    };
 
  
  printf("Reverse: %d\n",reverse);
  
  return 0;
}