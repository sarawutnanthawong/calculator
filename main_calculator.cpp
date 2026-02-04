#include <stdio.h>

// Function prototypes
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    float result;
    char op;

    printf("simple Calculator (+ , - , * , /)\n");

    printf("enter first num: ");
    scanf("%d", &num1);

    printf("enter operator (+ , - , * , /): ");
    scanf(" %c", &op);

    printf("enter second num: ");
    scanf("%d", &num2);

    printf("\nprocess:\n");

    if (op == '+') {
        result = add(num1, num2);
        printf("%d + %d\n", num1, num2);
        printf("result:\n%.0f\n", result);

    } else if (op == '-') {
        result = sub(num1, num2);
        printf("%d - %d\n", num1, num2);
        printf("result:\n%.0f\n", result);

    } else if (op == '*') {
        result = mul(num1, num2);
        printf("%d * %d\n", num1, num2);
        printf("result:\n%.0f\n", result);

    } else if (op == '/') {
        if (num2 == 0) {
            printf("Error: Cannot divide by zero!\n");
            return 0;
        }
        result = divide(num1, num2);
        printf("%d / %d\n", num1, num2);
        printf("result:\n%.2f\n", result);

    } else {
        printf("invalid operator! pls try again\n");
    }

    return 0;
}

// Functions
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;//adawdawd
}
