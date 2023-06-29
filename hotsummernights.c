#include <stdio.h>
#include <stdlib.h>
int siv[100001] = {0};
int n;
 int prime[9593];
void sieve() {
    int i = 2;
    int count = 0;
   while(i < 100001) {
    if(siv[i]) {
        i++;
        continue;
    } 
    int k = 2;
    prime[count] = i;
    count++;
    if(count > n) break;
    while(i*k < 100000) {
        siv[i*k] = 1;
        k++;
    }
    i++;
  }
}

int main() {
    scanf("%d", &n);
    sieve();
for(int i = 0; i < n; i++) printf("%d\n", prime[i]);
   return 0;
}