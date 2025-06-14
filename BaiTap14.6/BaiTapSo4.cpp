#include<stdio.h>
int main(){
  int t, n, m;
  
  do{
    printf("\nNhap so: ");
    scanf("%d", &n);
    if(n <= 0)
    {
      printf("\n So phai lon hon 0, Vui long nhap lai !");
    }
    
  }while(n <= 0);
  t = n;
  do{
     m = t % 10;
  }while(t /= 10);
  printf("\nChu so dau tien %d la: %d",n, m);
}
