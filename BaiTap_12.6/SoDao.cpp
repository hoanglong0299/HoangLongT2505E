#include <stdio.h>

int main(){
	
	int N, reverse = 0;

    printf("Nhap N: ");
    scanf("%d", &N);

    int original = N;  

    while (N != 0) {
        int digit = N % 10;         
        reverse = reverse * 10 + digit; 
        N /= 10;                  
    }

    printf("So dao nguoc cua %d la: %d\n", original, reverse);

    return 0;
}
