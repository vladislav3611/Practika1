#include<stdio.h>
int main()
{
float a;
char b;
printf("Vveedite chis;o dlya perevoda v gradysi (D):\n");
printf("Vvedite chislo dlya perevoda v radiani(R):\n");
scanf("%f%c", &a, &b);

if(b == 'G')
{
a = (a * 3.14)/180;
printf("%f radiani\n", a);
}
else if(b == 'R')
{
a = (a * 180)/3.14;
printf("%f gradusi\n", a);
}
printf("Cool job!!");
return 0;
}