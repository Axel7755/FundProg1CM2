#include <stdio.h>
#include <stdlib.h>

float Area(float x, float y){
    float a=x*y;
    return a;
}

int main(int argc, char** argv) {
    
    float bas, alt,a;
    printf("Ingrsa la base");
    scanf("%f",&bas);
    printf("Ingrsa la altura");
    scanf("%f",&alt);
    printf("El area es %f",Area(bas,alt));
    
    return (EXIT_SUCCESS);
}

