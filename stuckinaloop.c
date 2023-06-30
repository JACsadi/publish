#include <stdio.h>
#include <stdlib.h>
#define ll long long
ll f[10000];
ll fib(int n) {
    if(f[n] == 0) {
        printf("@-@");
        f[n] = fib(n-1) + fib(n-2);
    }
    return f[n]; 
}
int main() {
    f[0] = 1;
    f[1] = 1;
    int n;
    printf("input n, - 1 to terminate\n");
    scanf("%d", &n);
    while (n >= 0)
    {
    printf("\n%lld\n", fib(n)); 
    printf("input n, - 1 to terminate\n");
    scanf("%d", &n);
    }
    return 0;
}