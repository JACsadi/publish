#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateotp() {
    char arr[9];
    arr[8] = '\0';
    int y = 1;
    for(int i = 0; i < 8; i++) {
    srand(time(0));
    int k = rand() % 9;
     k = (k == 0) ? 1 : k; 
    y =  (((k + y) % 10) == 0) ? 1 : ((k + y) % 10);
    arr[i] = (char)(y) + '0';
    }
    return atoi(arr);
}
int main() {
    printf("%d", generateotp());
}
