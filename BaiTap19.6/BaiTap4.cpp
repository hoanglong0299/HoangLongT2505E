#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int maxAbs = 0;
    int absValue;

    printf("=== TIM X SAO CHO [-x,x] CHUA TAT CA GIA TRI ===\n");
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        absValue = arr[i];
        if (absValue < 0) absValue = -absValue;
        if (absValue > maxAbs) {
            maxAbs = absValue;
        }
    }

    printf("Gia tri x nho nhat sao cho [-x,x] chua tat ca gia tri la: %d\n", maxAbs);
    printf("Doan [-x,x] = [-%d, %d]\n", maxAbs, maxAbs);
    printf("Do dai doan: %d\n", 2 * maxAbs);

    return 0;
}
