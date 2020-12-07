#include <stdio.h>
#include <stdlib.h>

float x,z;

int main(int argc, char** argv) {
    int e;
    
    do{
        
        printf("Tecle el numero de la opcion que guste realizar \n");
        printf("1. Convertir grados kelvin a farenhei \n");
        printf("2. Convertir grados kelvin a centigrados \n");
        printf("3. Convertir grados centigrados a farenhei \n");
        printf("4. Convertir grados centigrados a kelvin \n");
        printf("5. Convertir grados farenhei a centigrados \n");
        printf("6. Convertir grados farenhei a Kelvin \n");
        printf("0. Salir \t");
        scanf("%d",&e);
        system("clear");
        
        if(e!=0&&e<=6){    
        printf("Ingrese la temperatura \t");
        scanf("%f",&x);}
        
        switch(e){
            case 1:
                KelFa();
                break;
            case 2:
                KelCe();
                break;
            case 3:
                CenFa();
                break;
            case 4:
                CenKel();
                break;
            case 5:
                 FaCen();
                break;
            case 6:
                FaKel();
                break;
            case 0:
                break;
            default:
                printf("No existe esa opcion favor de ingresar otro numero\n");
                break;
        }
        
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