#include <stdio.h>

int main() {
    int n;
    unsigned long long F0 = 0, F1 = 1, Fn = 0;
    int i = 2;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n == 0) Fn = F0;
    else if (n == 1) Fn = F1;
    else {
        while (i <= n) {
            Fn = F0 + F1;
            F0 = F1;
            F1 = Fn;
            i++;
        }
    }

    printf("So Fibonacci thu %d la: %llu\n", n, Fn);

    return 0;
}
