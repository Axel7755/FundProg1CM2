#include <stdio.h>
#include <stdlib.h>

float x,z;

int main(int argc, char** argv) {
    int e;
    
    do{
        //system("clear");
        printf("Tecle el numero de la opcion que guste realizar \n");
        printf("1. Convertir grados kelvin a farenhei \n");
        printf("2. Convertir grados kelvin a centigrados \n");
        printf("3. Convertir grados centigrados a farenhei \n");
        printf("4. Convertir grados centigrados a kelvin \n");
        printf("5. Convertir grados farenhei a centigrados \n");
        printf("6. Convertir grados farenhei a Kelvin \n");
        printf("0. Salir \t");
        scanf("%d",&e);
        
        
        if(e>6){
            
            printf("No existe esa opcion favor de ingresar otro numero\n");
           
        }else{
        
        if(e!=0){    
        printf("Ingrese la temperatura \t");
        scanf("%f",&x);}
        
        if(e==1){
            
            KelFa();
           
        }
        
        if(e==2){
            
            KelCe();
           
        }
        
        if(e==3){
            
            CenFa();
           
        }
        
        if(e==4){
            
            CenKel();
           
        }
        
        if(e==5){
            
            FaCen();
           
        }
        
        if(e==6){
            
            FaKel();
           
        }}
        
    }while(e!=0);
    
    return (EXIT_SUCCESS);
}

void KelFa(){
    
    z=((9*(x-273.15))/5)+32;
    printf("%f grados kelvin son %f grados farenhei",x,z);
    
}

void KelCe(){
    
    z=x-273.15;
    printf("%f grados kelvin son %f grados centigrados \n",x,z);
    
}

void CenFa(){
    
    z=((9*x)/5)+32;
    printf("%f grados centigrados son %f grados farenhei \n",x,z);
    
}

void CenKel(){
    
    z=x+273.15;
    printf("%f grados centigrados son %f grados kelvin \n",x,z);
    
}

void FaCen(){
    
    z=((5*(x-32))/9);
    printf("%f grados farenhei son %f grados centigrados \n",x,z);
    
}

void FaKel(){
    
    z=((5*(x-32))/9)+273.15;
    printf("%f grados farenhei son %f grados kelvin \n",x,z);
    
}

