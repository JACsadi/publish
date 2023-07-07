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
char nth_digit_of_the_seq(int n) {
 int j = 1;
 int count = 0;
 while(1) {
    int temp =  15 * binexp(16, j-1)* j;
    if(count + temp > n) break;
    count += temp;
    j++; 
 }
   if(n == count) return 'F';
   n -= count;
   int num = binexp(16, j - 1) + (int)(ceil((double)n/(double)j)) - 1;
   char *arr = (char*) malloc((j+1)*sizeof(char));
   sprintf(arr, "%X", num);
   return arr[((n%j) == 0 ) ? j-1 : (n%j)-1];
}
int main () {
    int n;
   while (1)
   {
   printf("INPUT THE position of the element, 0 to terminate:\n");
   scanf("%d", &n);
   if(n <= 0) break;
   printf("%c\n", nth_digit_of_the_seq(n));
   }
   printf("500 miles");
   return 0;
}
// the answer should only be this part 
// char nth_digit_of_the_seq(int n) {
//  int j = 1;
//  int count = 0;
//  while(1) {
//     int temp =  15 * pow(16, j-1)* j;
//     if(count + temp > n) break;
//     count += temp;
//     j++; 
//  }
//    if(n == count) return 'F';
//    n -= count;
//    int num = pow(16, j - 1) + (int)(ceil((double)n/(double)j)) - 1;
//    char *arr = (char*) malloc((j+1)*sizeof(char));
//    sprintf(arr, "%X", num);
//    return arr[((n%j) == 0 ) ? j-1 : (n%j)-1];
// }