#include <stdio.h>

int UCLN(int a, int b){
	if(a < 0) a = -a;
	if(b < 0) b = -b;
	if (a == 0) return b;
    if (b == 0) return a;
      while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



