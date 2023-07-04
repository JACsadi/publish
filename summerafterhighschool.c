#include <stdlib.h>
#include <stdio.h>
int abnum(int num) {
    int sum = 0;
    for(int i = 2; i*i < num +1; i++) {
        if(num % i != 0) continue;
        if(i*i == num) sum += i;
        else sum += i + (num / i); 
    }
    return ((sum >= num) ? 1 : 0);
}
int main() {
  int N, M;
  scanf("%d %d", &N, &M);
  int *a;
  int j = 0;
  for(int i = N+1; i < M; i++) {
    if(abnum(i)) {
        j++;
        a = (int*) realloc(a, sizeof(int) * j);
        a[j-1] = i;
    }
  }
  for(int i =0;i<j;i++) printf("%d  ", a[i]);
}