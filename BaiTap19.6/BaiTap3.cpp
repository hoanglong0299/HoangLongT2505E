#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int min, max;

    printf("=== TIM DOAN [a,b] CHUA TAT CA GIA TRI ===\n");
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Doan [a,b] chua tat ca gia tri la: [%d, %d]\n", min, max);
    printf("Do dai doan: %d\n", max - min);

    return 0;
}
