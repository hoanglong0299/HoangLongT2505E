#include <stdio.h>
int main(){
	int n;
	printf("Nhap so:");
	scanf("%d",&n);
	
	while (n > 0){
			if(n % 2 == 0 && n % 3 == 0){
				printf("Ket qua: %d\n",n);
			 break;	
			}
			n--;
	}
}

	
	
