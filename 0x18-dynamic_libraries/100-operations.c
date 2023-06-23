#include <stdio.h>

int add(int a, int b) {
    return (a + b);
}

int sub(int a, int b) {
    return (a - b);
}

int mul(int a, int b) {
    return (a * b);
}

int div(int a, int b) {
    return (a / b);
}

int mod(int a, int b) {
    return (a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", sub(num1, num2));
    printf("Multiplication: %d\n", mul(num1, num2));
    printf("Division: %d\n", div(num1, num2));
    printf("Modulus: %d\n", mod(num1, num2));

    return 0;
}
