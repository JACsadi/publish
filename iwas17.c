#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b)  {
    return (float*) a - (float*) b;
}
int bs(float arr[], int size, float target) {
    int l = 0;
    int r = size -1;
    while (l <= r)
    {   
        int m = (l+r)/2;
        if(arr[m] - target < 0.001) return m;
        else if(arr[m] > target) r = m -1;
        else l = m + 1;
    }
    return -1;
}
int main() {
   float arr[10] = {2.2, 3.3, 4.4 ,6.6,7.7,8.7,9.7, 10.0, 11.1};
   qsort(arr, sizeof(float), 9, comp);
   float k;
   scanf("%f", &k);
   printf("%f %d", k,bs(arr, 9, k));
   return 0;
}