#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    char p[55]="Char no es lo mismo que string esto es solo una cadena";
    
    printf("%s\n",p);
            char cad[7] = {'a','r','r','e','l','o','\0'};
    for(int n=0;n<10;n++){
        printf("%s ",cad[n]);
    }
    return (EXIT_SUCCESS);
}
//investigar e implementar como funcionan los arreglos y cadenas de caracteres en c

