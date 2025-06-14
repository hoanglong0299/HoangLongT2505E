#include <stdio.h>
int main(){
	int a , b;
	
	printf("Nhap so thu nhat:");
	scanf("%d",&a);
	printf("Nhap so thu hai:");
	scanf("%d",&b);
	
	for(int i = a; i > 1;i--){
		if(a%i == 0 && b%i == 0){
			printf("UCLN cua %d va %d la: %d",a,b,i);
			break;
		}
	}
	
	for(int x =2 ;; x++){
		if(x%a == 0 && x%b == 0){
			printf("\nBCNN cua %d va %d la: %d",a,b,x);
			break;
		}
	}
}
