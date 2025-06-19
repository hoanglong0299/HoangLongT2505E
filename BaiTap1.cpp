#include <stdio.h>
#include <stdlib.h>

int TimGiaTriXaNhat(int arr[], int n, int x) {
    if (n <= 0) {
        printf("Mang rong hoac khong hop le.\n");
        return -1;
    }

    int GiaTriXaNhat = arr[0];
    int GiaTriTuyetDoi = abs(arr[0] - x);

    for (int i = 1; i < n; i++) {
        int GiaTriHienTai = abs(arr[i] - x);
        if (GiaTriHienTai > GiaTriTuyetDoi) {
            GiaTriTuyetDoi = GiaTriHienTai;
            GiaTriXaNhat = arr[i];
        }
    }

    return GiaTriXaNhat;
}

int main() {
    int n;
    printf("Nhap so luong phan tu cua mang (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu khong hop le. Vui long nhap mot so duong.\n");
        return 1; 
    }

    int arr[n]; 
    printf("Nhap %d so nguyen cho mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    int result = TimGiaTriXaNhat(arr, n, x);

    if (result != -1) {
        printf("Gia tri xa %d nhat trong mang la: %d\n", x, result);
    }

    return 0; 
}
