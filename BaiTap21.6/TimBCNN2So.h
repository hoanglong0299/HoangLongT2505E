#include <stdio.h>
#include <math.h>

int bcnn(int a, int b){
   int max = a > b ? a : b;
   int kq = max;
   while(1){
      if(max % a == 0 && max % b == 0){
         kq = max;
         break;
      }
      ++max;
   }
   return kq;
}

