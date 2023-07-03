#include <stdio.h>
#include <stdlib.h>
int main() {
    char strformat[100];
  FILE* rev = NULL;
  FILE * exp = NULL;
  FILE *out = NULL;
  out = fopen("D:\\Summary.txt", "w+");
  char j = 'A';
  while(j != 'D') {
    int sum = 0;
  for(int i = 1; i < 5; i++) {
    int r,e;
    sprintf(strformat, "D:\\Branch %c\\section %d\\revenue.in", j, i);
    // printf("%s\n", strformat);
    rev = fopen(strformat, "r+");
    sprintf(strformat, "D:\\Branch %c\\section %d\\expanses.out", j, i);
    exp = fopen(strformat, "r+");;
    fscanf(rev, "%d", &r);
    fscanf(exp, "%d", &e);
    sum += (r - e);
    fclose(rev);
    fclose(exp);
  }
     fprintf(out, "%d\n", sum);
     printf("%d\n", sum);
     j++;
  }
 fclose(out);
  return 0;
}
