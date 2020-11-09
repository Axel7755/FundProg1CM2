#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {

    int w,x,y,z;
    
    printf("Introduzca cuatro numeros enteros separados por un espacio \n");
    scanf("%d %d %d %d",&w,&x,&y,&z);
    
    if(w>=x&&w>=z&&w>=y){
        
         printf("El mayor es %d\n\n",w);
        
    }
    if(x>=w&&x>=z&&x>=y){
        
         printf("El mayor es %d\n\n",x);
        
    }
    if(y>=x&&y>=z&&y>=w){
        
         printf("El mayor es %d\n\n",y);
        
    }
    if(z>=x&&z>=w&&z>=y){
        
         printf("El mayor es %d\n\n",z);
        
    }
    
    
    
    return (EXIT_SUCCESS);
}

