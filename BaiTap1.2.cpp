#include <stdio.h>

int main() {
    int n, x, i;
    int arr[100];
    int maxDistance = 0;
    int result;
    int distance;

    printf("=== TIM GIA TRI XA X NHAT ===\n");
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("Phan tu so[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);

    result = arr[0];
    distance = arr[0] - x;
    if (distance < 0) distance = -distance;
    maxDistance = distance;

    for (i = 1; i < n; i++) {
        distance = arr[i] - x;
        if (distance < 0) distance = -distance;
        if (distance > maxDistance) {
            maxDistance = distance;
            result = arr[i];
        }
    }

    printf("Gia tri xa x(%d) nhat la: %d\n", x, result);
    printf("Khoang cach: %d\n", maxDistance);

    return 0;
}
