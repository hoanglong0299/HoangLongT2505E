#include <stdio.h>
int main(){
	
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	printf("Tong cac chu so cua n: %d",sum);
}
