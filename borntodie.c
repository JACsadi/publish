//this is the same problem just for decimal
//this may not be the most optimal code , i am sleep deprived and drunk on life  
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int binexp(int b, int e) {
    int mul = 1;
    while(e > 0) {
        if(e & 1) {
            mul = (mul * b) ;
        }
        b = (b* 1LL * b);
        e >>= 1;
    } 
    return mul;
    
}
int f(int k) {
 int tp = 987654321;
 int j = 1;
 while(k >9*(tp % binexp(10,j))) {
    j++;
 }
 k -= 9*(tp % binexp(10,j-1));
 if(k == 0) return 9;
 int num = binexp(10, j - 1) + (int)(ceil((double)k/(double)j)) - 1;
  k = (k % j == 0 ) ? j : k % j;
 return (num / binexp(10,j-k)) % 10;
}
int main () {
   int n;
   scanf("%d", &n);
   int k = f(n); 
   printf("%d", k);
   return 0;
}
//seems like its working 
//though i havent checked much