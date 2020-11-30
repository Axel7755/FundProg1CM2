#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int us,n,may;
    
    printf("Ingresa la cantidad de numeros que desea inresar: \t");
    scanf("%d",&us);
    
    long long int Ar[us];   
        
    for(int x=0;x<us;x++){
        
        printf("\nIngresa un numero: \t");
        scanf("%d",&n);
        Ar[x]=n;
                
    }
    
    for(int y=0;y<=us;y++){
        
        for(int z=0;z<us-y;z++){
            
            if(Ar[z]>Ar[z+1]){
                
                may=Ar[z];
                Ar[z]=Ar[z+1];
                Ar[z+1]=may;

            }
            
        }
        
    }
    
    for(int p=0;p<us;p++){
        printf("%d  ",Ar[p]);
    }
        
    return (EXIT_SUCCESS);
}