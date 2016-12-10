#include<stdio.h>
int main()
{
   int a,b,c;
    printf("Vvedite svoy pol(man=1,women=2):\n");
    scanf("%d",&a);
    printf("Vvedite svoy rost:\n");
    scanf("%d",&b);
    printf("Vvedite svoy ves:\n");
    scanf("%d",&c);
    if(a==1&&b<18&&c>50)
    {    
    printf("Похудей,жирный!");
    }
    else if(a==1&&b<175&&c<55)
    {
        printf("Потолстей,чувак!");
    }
    else if(a==1&&b>175&&c>65)
    {
        printf("Похудей,мужик!");
    }
    else if(a==1&&b>175&&c<65)
    {
        printf("Потолстей,мужик");
    }
    else if(a==1&&b<175&&c==55)
    {
        printf("norma!");
    }
    else if(a==1&&b>175&&c==65)
    {
        printf("norma!");
    }
    else if(a>1&&b<165&&c<40)
    {
        printf("Потолстей!");
    }
    else if(a>1&&b<165&&c>40)
    {
        printf("Похудей!");
    }   
    else if(a>1&&b>165&&c<40)
    {
        printf("Потолстей!");
    }
    else if(a>1&&b>165&&c>40)
    {
        printf("Похудей!");
    }
    else if(a>1&&b<165&&c==40)
    {
        printf("norma!");
    }
    else if(a>1&&b>165&&c==50)
    {
        printf("norma");
    }
}






    
        
    
        
        

              
    
    
