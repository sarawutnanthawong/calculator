#include <stdio.h>

// 1. เพิ่ม Prototype สำหรับการคูณ
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b); 

int main() {
    int num1, num2, result;
    char op;

    // ปรับข้อความแนะนำเล็กน้อย
    printf("simple Calculator (+ , - , *)\n");
    printf("enter first num: ");
    scanf("%d", &num1);

    printf("enter operator (+ , - , *): ");
    scanf(" %c", &op);   

    printf("enter second num: ");
    scanf("%d", &num2);

    if (op == '+') {
        result = add(num1, num2);
    } else if (op == '-') {
        result = sub(num1, num2);
    } else if (op == '*') {
        result = mul(num1, num2);
    } else {
        printf("invalid operator! pls try again\n");
        return 0;
    }

    printf("\nprocess:\n");
    printf("%d %c %d\n", num1, op, num2);
    printf("result:\n");
    printf("%d\n", result);

    return 0;
}

int mul(int a, int b)
{
    return a * b;
}