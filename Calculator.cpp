#include <stdio.h>

int mul(int a, int b); 

int main() {
    int num1, num2, result;
    char op;

    printf("Simple Multiplication Calculator (*)\n");
    
    printf("Enter first num: ");
    scanf("%d", &num1);

    printf("Enter operator (*): ");
    scanf(" %c", &op);   

    printf("Enter second num: ");
    scanf("%d", &num2);

    if (op == '*') {
        result = mul(num1, num2);
    } else {
        printf("Invalid operator! Please use '*'\n");
        return 0;
    }

    printf("\nProcess:\n");
    printf("%d %c %d\n", num1, op, num2);
    printf("Result:\n");
    printf("%d\n", result);

    return 0;
}

int mul(int a, int b) {
    return a * b;
}