#include <stdio.h>
#include <stdlib.h>

int x=3,*p;
int main(int argc, char** argv) {
    //direccion de x
    p=&x;
    //sobre escribe el contenido que se encuentra en la direccion
    *p=8;
    printf(" %d",x);
    printf("\n %p",p);
    
}

