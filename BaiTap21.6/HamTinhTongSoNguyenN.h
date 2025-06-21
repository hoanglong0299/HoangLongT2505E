#include <stdio.h>

int total(int n){
	int sum = 0;
		while(n > 0){
		sum += n % 10;
		n /= 10;
	}
		return sum;
}

float DienTichTamGiac (float a, float b, float c){ 
    float P = (a+b+c)/2.0;
    float S= sqrt(P*(P - a)*(P - b)*(P - c));
    return S;
}


