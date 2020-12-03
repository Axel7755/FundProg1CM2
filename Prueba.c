#include <stdio.h>
#include <stdlib.h>

float x,y,a;

int main(int argc, char** argv) {

    x=4,y=3;
    area();
    
    return (EXIT_SUCCESS);
}

void area(){
    a=x*y;
    printf("area =  %f",a);
}