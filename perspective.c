#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)
int main() {
    int n;
    scanf("%d", &n);
    char t[500001];
    scanf(" %s", t);
    int len = strlen(t);
    ll* frontcount = (ll*) calloc((len+1),sizeof(ll));
    ll* backcount = (ll*) calloc((len+1),sizeof(ll));
    f(i,n) {
      char s[500001];
      scanf(" %s", s);
      int siz = strlen(s);
      int j = 0,cc = 0;
      f(i, siz) {
        if(s[i] == t[j]) {
            j++;
            if(j == len) break;
        }
      }
      frontcount[j]++;
      j = len-1;
       for(int i = siz - 1; i>=0; i--) {
        if(s[i] == t[j]) {
            j--;
            cc++;
            if(j < 0) break;
        }
      }
      backcount[cc]++;
    }
    ll sum = 0;
    for(int i = len-1; i >= 0; i--) backcount[i] += backcount[i+1];
    for(int i = 0; i <= len; i++) sum += frontcount[i]*backcount[len-i];
    printf("%lld\n", sum);
    return 0; 
}