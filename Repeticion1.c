#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {

    int u=1,p=0,i=2,A=1,x;
    
    printf("Ingresa el numero de elementos que deseas ver de la serie de fibonaci: \t");
    scanf("%d",&x);
    
    printf("%d \n",p);
    
    while(i<=x){
        
        printf("%d \n",A);
        A=u+p;
        p=u;
        u=A;  
        i++;
        
    }
    
    return (EXIT_SUCCESS);
}

