#include <stdio.h>

int add(int a, int b);

int sub(int a, int b);

int main() {

    int num1, num2, result;

    printf("enter first num: ");

    scanf("%d", &num1);

    printf("enter second num: ");

    scanf("%d", &num2);

    result = sub(num1, num2);

    printf("\nprocess:\n");

    printf("%d %d\n", num1, num2);

    printf("result:\n");

    printf("%d\n", result);

    return 0;
}

int sub(int a, int b) {
    
    return a - b;

}