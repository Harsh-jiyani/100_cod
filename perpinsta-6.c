#include <stdio.h>
#include <math.h>

void checkperfectsquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        printf("True");
    }
    else {
        printf("False");
    }
}

int main()
{
 
    int n = 49;
    checkperfectsquare(n);
    return 0;
}