#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int us,n,max=0,min;
    
    printf("Ingresa la cantidad de numeros que desea inresar: \t");
    scanf("%d",&us);
    
    long int Ar[us];
        
    for(int x=0;x<us;x++){
        
        printf("\nIngresa un numero: \t");
        scanf("%d",&n);
        Ar[x]=n;
        
        if(x==0){
            min=Ar[x];
        }
        
        if(Ar[x]>max){
        
            max=Ar[x];
            
        }
        
        if(Ar[x]<min){
        
            min=Ar[x];
            
        }
        
    }
     
    printf("El mayor es:  %d  y el menor es:  %d",max,min);
    
        
    return (EXIT_SUCCESS);
}