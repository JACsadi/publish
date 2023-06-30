//this should work for any base <= 10 
// welll dont input 1 in base , that would go brrrrrrrrrrrrrrrrr 
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
int nth_digit_of_the_seq(int k,int b, int arr[]) {
 int j = 1;
//  for(int i = 0; i < 10; i++) printf("%d\n", arr[i]);
 while(k > (b-1)*arr[j]) {
    j++;
 }
 k -= (b-1)*(arr[j-1]);
//  printf("%d", &k);
 if(k == 0) return (b-1);
 int num = binexp(b, j - 1) + (int)(ceil((double)k/(double)j)) - 1;
  k = (k % j == 0 ) ? j : k % j;
 return (num / binexp(b,j-k)) % b;
}
int main () {
   printf("input the BASE :\n"); 
   int b, n;
   scanf("%d", &b);
   if(b == 1) {
    while(1) printf("brr(- -)rrrrr");
   }
   int arr[10] = {0}; 
   arr[1] = 1;
   for(int i = 2; i < 10; i++) {
    arr[i] = ((i)*binexp(b,i-1)) + arr[i-1];
   }
   printf("INPUT THE position of the element, 0 to terminate:\n");
   scanf("%d", &n);
   while (n >= 1)
   {
   int k = nth_digit_of_the_seq(n,b,arr); 
   printf("%d\n", k);
   printf("INPUT THE position of the element, 0 to terminate:\n");
   scanf("%d", &n);
   }
   printf("GOODBYE GOODBYE GOODBYE, YOU WERE BIGGER THAN THE WHOLE SKY");
   return 0;
}
