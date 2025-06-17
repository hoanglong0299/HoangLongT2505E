#include <stdio.h>
int main(){
	int size;
	do{
		printf("Nhap so luong phan tu:");
		scanf("%d",&size);
	}while (size <= 0);
	
	int player[size];
	int SLN;	
	for(int  i = 0; i < size; i++){
		printf("Nhap pt vao mang: ");
		scanf("%d",&player[i]);
	}
	int s = 0;
	int c = 0;
	for (int  i = 0; i < size ; i++){
		if(player[i]%2 == 1){
			s =s + player[i];
			c++;
		}
	}
	if(c>0){
		float tbc = (float)s/c;
		printf("TBC so le: %f",tbc);
	}else{
		printf("Mang ko co so le");
	}
}
