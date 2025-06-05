#include <stdio.h>

int main() {
    double thuNhap;
    const double giamTruBanThan = 11000000;
    int lf;
    printf("Nhap tong thu nhap ca nhan hang thang:");
    scanf("%lf", &thuNhap);
 
    double thuNhapChiuThue = thuNhap - giamTruBanThan;

    if (thuNhapChiuThue <= 0) {
        printf("Thu nhap khong du de dong thue.\n");
    } else {
        double thue = thuNhap - thuNhapChiuThue;
        printf("Thu nhap chiu thue: %.0f VND\n", thuNhapChiuThue);
        printf("So tien thue phai nop: %.0f VND\n", thue);
    }

    return 0;
}

double tinhThue(double thuNhapChiuThue) {
    double thue = 0.0;

    if (thuNhapChiuThue <= 0) {
        return 0.0;
    }

    if (thuNhapChiuThue <= 5000000) {
        thue = thuNhapChiuThue * 0.05;
    } else if (thuNhapChiuThue <= 10000000) {
        thue = 5000000 * 0.05 + (thuNhapChiuThue - 5000000) * 0.10;
    } else if (thuNhapChiuThue <= 18000000) {
        thue = 5000000 * 0.05 + 5000000 * 0.10 + (thuNhapChiuThue - 10000000) * 0.15;
    } else if (thuNhapChiuThue <= 32000000) {
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + (thuNhapChiuThue - 18000000) * 0.20;
    } else if (thuNhapChiuThue <= 52000000) {
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 +
               14000000 * 0.20 + (thuNhapChiuThue - 32000000) * 0.25;
    } else if (thuNhapChiuThue <= 80000000) {
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 +
               14000000 * 0.20 + 20000000 * 0.25 + (thuNhapChiuThue - 52000000) * 0.30;
    } else {
        thue = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 +
               14000000 * 0.20 + 20000000 * 0.25 + 28000000 * 0.30 +
               (thuNhapChiuThue - 80000000) * 0.35;
    }

    return thue;
}
