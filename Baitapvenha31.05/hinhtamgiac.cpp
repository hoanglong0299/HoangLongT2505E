#include <stdio.h>

int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("Nhap so b=");
	scanf("%d",&b);
	
	int c;
	printf("Nhap so c=");
	scanf("%d",&c);
	
	if(a + b > c){
		if(a + c > b){
			if(b + c > a){
				printf("Day la hinh tam giac");
			}
		}
	}else{
		printf("Day khong phai hinh tam giac");
	}
}
