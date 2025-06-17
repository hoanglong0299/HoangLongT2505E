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
	int SoLeCuoiCung = -1;
	int ViTri = -1;
	
	for (int i = n -1; i >= 0 ;i--){
		if(A[i]%2 != 0){
			SoLeCuoiCung = A[i];
		ViTri = i;
		break;
		}		
	}
	
	if ( ViTri != -1){
		printf("So le cuoi cung trong mang là : %d\n",SoLeCuoiCung);
	}else{
		printf("Mang khong co so le.\n");
	}
}
