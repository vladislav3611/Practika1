#include <stdio.h>
int main()
{
    int hours, minutes, seconds;
    printf("Vvedite vremya x:x:x =");
    scanf("%d:%d%:%d", &hours, &minutes, &seconds);
    if (hours <= 12)
    {
        printf("good morning");
    }
    else if (hours<=18)
    {
        printf("Good afternoon");
    }
    else if (hours>=22)
    {
        printf("Good night");
    }
}
    