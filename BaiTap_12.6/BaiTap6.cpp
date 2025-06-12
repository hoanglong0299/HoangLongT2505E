#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int F0 = 0, F1 = 1, Fn = 1;

    if (n == 0) {
        printf("So tiem can duoi la: 0\n");
        return 0;
    }

    while (Fn <= n) {
        F0 = F1;
        F1 = Fn;
        Fn = F0 + F1;
    }

    printf("So tiem can duoi Fibonacci voi %d la: %d\n", n, F0);

    return 0;
}
