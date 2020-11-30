#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int us,n;
    float prom;
    
    printf("Ingresa la cantidad de numeros que desea inresar: \t");
    scanf("%d",&us);
    
    long int Ar[us];   
        
    for(int x=0;x<us;x++){
        
        printf("\nIngresa un numero entero: \t");
        scanf("%d",&n);
        Ar[x] = n;
        prom = prom + n;
        
    }
    
    prom=prom/us;
    printf("\nEl promedio es: %f \n",prom);
        
    return (EXIT_SUCCESS);
}