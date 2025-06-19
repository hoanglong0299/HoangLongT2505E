#include <stdio.h>

int main() {
    int n, x, i;
    int arr[n];
    int minDistance;
    int result;
    int distance;

    printf("=== TIM GIA TRI GAN X NHAT ===\n");
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu [%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);

    result = arr[0];
    distance = arr[0] - x;
    if (distance < 0) distance = -distance;
    minDistance = distance;

    for (i = 1; i < n; i++) {
        distance = arr[i] - x;
        if (distance < 0) distance = -distance;
        if (distance < minDistance) {
            minDistance = distance;
            result = arr[i];
        }
    }

    printf("Gia tri gan x(%d) nhat la: %d\n", x, result);
    printf("Khoang cach: %d\n", minDistance);

    return 0;
}
