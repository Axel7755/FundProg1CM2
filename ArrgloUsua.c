#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int us,n;
    
    printf("Ingresa la cantidad de numeros que desea inresar: \t");
    scanf("%d",&us);
    
    long int Ar[us];   
        
    for(int x=0;x<us;x++){
        
        printf("\nIngresa un numero: \t");
        scanf("%d",&n);
        Ar[x]=n;
        
    }
    for(int y=0;y<n;y++){
        
        printf("\n%d",Ar[y]);
        
    }
        
    return (EXIT_SUCCESS);
}