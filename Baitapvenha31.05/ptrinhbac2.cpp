#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
	
	float a;
	float b;
	float c;
	float x;
	float d;
	float x1;
	float x2;
	printf("Nhap a=");
	scanf("%f",&a);
	printf("Nhap b =");
	scanf("%f",&b);
	printf("Nhap c =");
	scanf("%f",&c);
	
	if(a== 0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x = -c / b;
			printf("x = %f",x);
		}
	}else{
		d= b*b - 4 *a *c;
		if(d<0){
			printf("Phuong trinh vo nghiem");
		}else if(d == 0){
			x = -b / 2*a;
				printf("Phuong trinh co nghiem kep: %f",x);
		}else{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet= %f,%f",x1,x2);
		
		}
		
	}
}


