#include <stdio.h>
int main() {    

    int A,B, subtract;
    
    printf("Enter two num: ");
    scanf("%d %d", &A, &B);
    subtract = A - B;       
    printf("%d - %d = %d", A, B, subtract);
    return 0;
}
