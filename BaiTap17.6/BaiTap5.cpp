#include <stdio.h>

int main(){

	int n;
	do{
		printf("Nhap so luong phan tu:");
		scanf("%d",&n);
	}while (n <= 0);
	
	int A[n];	
	for(int  i = 0; i < n; i++){
		printf("Nhap pt vao mang: ");
		scanf("%d",&A[i]);
	}
	int soDuongNhoNhat;
    int timThay = 0; 
    for (int i = 0; i < n; i++) {
       
        if (A[i] > 0 && A[i] < soDuongNhoNhat) {
            soDuongNhoNhat = A[i];
            timThay = 1; 
        }
    }
    
    if (timThay) {
        printf("So duong nho nhat trong mang la: %d\n", soDuongNhoNhat);
    } else {
        printf("Mang khong co so duong nao.\n");
    }
}
