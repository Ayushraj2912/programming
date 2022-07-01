#include <stdio.h>
int factorial(int n)
{
    if (n==0)
    return 1;

    return n*factorial(n-1);
 
}
 int main ()
 {
    int number; 
    int fact;
    printf("enter a number:");
    scanf("%d", &number);

    fact = factorial(number);
    printf("factorial of %d is %d\n", number, fact);
    return 0;
     }
    