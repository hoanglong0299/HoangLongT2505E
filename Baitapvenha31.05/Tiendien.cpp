#include <stdio.h>

int main(){
	int N;
	int R;
	printf("Nhap so dien:");
	scanf("%d",&N);
	
	if(N<=50){
		R=N*1678;
	}else{
		if(N>50 && N<=100){
			R= N*1734;
		}else{
			if(N>100 && N<200){
				R= N*2014;
			}else{
				R=N*2536;
			}
		}
	}
	printf("Tien dien: %d",R);
}
