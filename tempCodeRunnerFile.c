#include <stdio.h>

void pascal_triangle(int);
int factorial(int);
int ncr(int, int);

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    pascal_triangle(n);
    return 0;
}

void pascal_triangle(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4d", ncr(i, j));  // Print number with spacing
        }

        printf("\n");
    }
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
