#include <stdio.h>

// Hàm ki?m tra nam nhu?n
int laNamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Hàm tr? v? s? ngày c?a m?t tháng
int soNgayTrongThang(int thang, int nam) {
    switch(thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return laNamNhuan(nam) ? 29 : 28;
        default:
            return -1; // Tháng không h?p l?
    }
}

// Hàm ki?m tra ngày h?p l?
int ngayHopLe(int ngay, int thang, int nam) {
    if (nam < 1 || thang < 1 || thang > 12) return 0;
    int ngayTrongThang = soNgayTrongThang(thang, nam);
    return ngay >= 1 && ngay <= ngayTrongThang;
}

int main() {
    int ngay, thang, nam;

    // Nh?p d? li?u
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    // Ki?m tra tính h?p l?
    if (!ngayHopLe(ngay, thang, nam)) {
        printf("Ngay khong hop le!\n");
        return 1;
    }

    // Tính ngày k? ti?p
    ngay++;
    if (ngay > soNgayTrongThang(thang, nam)) {
        ngay = 1;
        thang++;
        if (thang > 12) {
            thang = 1;
            nam++;
        }
    }

    // In k?t qu?
    printf("Ngay ke tiep la: %02d/%02d/%04d\n", ngay, thang, nam);
    return 0;
}
