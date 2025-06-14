#include <stdio.h>
int main(){
	
	int n,S;
	do{
		printf("\nNhap so nguyen:");
		scanf("%d",&n);
		if (n <= 0){
			printf("Vui long nhap lai!");
		}
	}while (n <= 0);
	
	for(int i =1;i <= n; i++){
		if(n % i == 0){
			printf("\nCac uoc so: %d",i);
			S = S + i;
		}
	}
	printf("\nTong cac uoc so: %d",S);
}
