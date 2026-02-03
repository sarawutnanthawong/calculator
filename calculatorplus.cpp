#include <stdio.h>

int add(int a, int b);

int main() {

    int num1, num2, result;

    printf("simple calculator (addition only)\n");

    printf("enter first num: ");

    scanf("%d", &num1);

    printf("enter second num: ");

    scanf("%d", &num2);

    result = add(num1, num2);

    printf("\nprocess:\n");

    printf("%d + %d\n", num1, num2); 

    printf("result:\n");

    printf("%d\n", result);

    return 0;
}

int add(int a, int b) {

    return a + b;
}