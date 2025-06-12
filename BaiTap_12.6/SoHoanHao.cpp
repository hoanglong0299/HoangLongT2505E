#include <stdio.h>

int main() {
    int N, sum = 0, i = 1;

    printf("Nhap N: ");
    scanf("%d", &N);

    while (i < N) {
        if (N % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == N) {
        printf("%d la so hoan hao.\n", N);
    } else {
        printf("%d khong phai la so hoan hao.\n", N);
    }

    return 0;
}


