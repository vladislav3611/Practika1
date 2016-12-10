 #include <stdio.h>
 int main()
 {
     float foot, inch, growth;
     printf("VVedite foots:\n");
     scanf("%f", &foot);
     printf("Vvedite inch:\n");
     scanf("%f", &inch);
     foot = 2.54 * inch * foot;
     inch = 2.54 * inch;
     growth = foot + inch;
     printf("%f = Growth\n", growth);
     if(growth<170){
         printf("Ha! As low...");}
     else if(growth>170){
         printf("WOW! How high!");}
     return 0;
 }
   