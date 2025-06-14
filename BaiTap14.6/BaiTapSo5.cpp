#include<stdio.h>
int main(){
  int i, n, k;
  int m = 0;
  do{
    printf("\nNhap so duong: ");
    scanf("%d", &n);
    
  }while(n < 0 && printf("\nSo phai > = 0"));
  k = n;

  if(n == 0)
    m = 0;
  
  do{
    i = n % 10;
    if(i > m){
      m = i;
    }
    
  }while(n /= 10);
  printf("\nChu so lon nhat trong %d là: %d",k, m);
}
