#include <stdio.h>
int main() {    

    int A,B, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &A, &B);
    sum = A + B;       
    printf("%d + %d = %d", A, B, sum);
    return 0;
}
