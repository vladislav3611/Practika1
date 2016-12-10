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
    printf("Pohudey!");
    }
    else if(a==1&&b<175&&c<55)
    {
        printf("Potolstey!");
    }
    else if(a==1&&b>175&&c>65)
    {
        printf("pohudey, man!");
    }
    else if(a==1&&b>175&&c<65)
    {
        printf("Potolsteyu, man");
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
        printf("Potolstey!");
    }
    else if(a>1&&b<165&&c>40)
    {
        printf("Pohudey!");
    }   
    else if(a>1&&b>165&&c<40)
    {
        printf("Potolstey!");
    }
    else if(a>1&&b>165&&c>40)
    {
        printf("Pohydey!");
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






    
        
    
        
        

              
    
    
