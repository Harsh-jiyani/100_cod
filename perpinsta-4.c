
// Factorial number
#include<stdio.h>
int main ()
{
    int num , fact = 1;
    printf("enter number for fact:");
    scanf("%d",&num);
    
   
    if(num < 0)
        printf("Error");
    else
    {
        for(int i = 1; i <= num; i++)
            fact = fact * i;
    }
    
    printf("Fact %d: %d",num, fact);
}