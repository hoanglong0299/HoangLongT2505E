#include <stdio.h>
int main(){
	int size;
	do{
		printf("Nhap so luong phan tu:");
		scanf("%d",&size);
	}while (size <= 0);
	
	int player[size];
		
	for(int  i = 0; i < size; i++){
		printf("Nhap pt vao mang: ");
		scanf("%d",&player[i]);
	}
		int x ;
		printf("Nhap so x:");
		scanf("%d",&x);
		for (int  i = 0; i < size ; i++){
			if (x == player[i]){
				printf("X co trong mang");
			}
	}	
}
	

