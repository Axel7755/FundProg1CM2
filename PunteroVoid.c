#include <stdio.h>
#include <stdlib.h>

//int x=45;
int main(int argc, char** argv) {

    int x=45;
    ejemplo(x);
    printf("%d\n",x);
    ejemplo2(&x);
    printf("%d\n",x);
    
    return (EXIT_SUCCESS);
}

void ejemplo (int x){
    x++;
    printf("%d\n",x);
}

void ejemplo2 (int *x){
    (*x)++;
    
    printf("%d\n",*x);
}