 #include <stdio.h>
 #include <stdlib.h>
  int main() {
  while(1) {
       double c, cl, dm, eee, eeel ,eng, engl, la, sss;
         printf("Enter your Grade of C\n");
         scanf("%lf", &c);
         printf("Enter your Grade of C lab\n");
         scanf("%lf", &cl);
         printf("Enter your Grade of DM\n");
         scanf("%lf", &dm);
         printf("Enter your Grade of EEE\n");
         scanf("%lf", &eee);
         printf("Enter your Grade of EEE lab\n");
         scanf("%lf", &eeel);
         printf("Enter your Grade of Eng\n");
         scanf("%lf", &eng);
         printf("Enter your Grade of Eng lab\n");
         scanf("%lf", &engl);
         printf("Enter your Grade of Linear\n");
         scanf("%lf", &la);
         printf("Enter your Grade of SSS\n");
         scanf("%lf", &sss);
         printf(" fuck your cgpa isss %lf\n\n\n", ((c*3.0)+(cl*3.0)+(dm*3.0)+(eee*3.0)+(eeel*1.5)+(sss*3.0)+(la*3.0)+(eng*2)+engl)/22.5);
  }
  return 0;
  }
