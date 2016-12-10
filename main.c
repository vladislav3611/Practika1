#include<stdio.h> 
#include<string.h>
int main()
{
    char str[80];
    int length = 80, a, i;
    printf("Vvedite stroku\n");
    gets(str);
    a = (length - strlen(str)) / 2;
    for(i=0;i<a;i++)
        printf(" ");
    printf("%s",str);
    return 0;
}
                
    
    
    
    
    
   

    