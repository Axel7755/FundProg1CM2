#include <stdio.h>
#include <stdlib.h>

long int fiv (int n);
long int fact (int n);

int main(int argc, char** argv){
    int n,op;

    printf("Que desea ralizar: \n1.Fibonacci \n2.Factorial \n0. Salir");
    scanf("%d",&op);
    do{
    switch(op){
        case 1:
            printf("Ingresa el numero del que desea su factorial: \t");
            scanf("%d", &n);
            printf("%d \n",  fact(n));
            break;
        case 2:
            printf("Ingresa el numero del elemento que deseas ver de la serie de fibonaci: \t");
            scanf("%d", &n);
            printf("%d \n",  fiv(n));
        break;
        
    }
    }while(op!=0);
    return (EXIT_SUCCESS);
}

long int fiv (int n)   
{
    if(n < 2){
        return n;
    }
    else{
        return fiv(n-1) + fiv(n-2);
    }
}

long int fact (int n)   
{
    if(n <= 1){
        return 1;
    }
    else{
        return n*fiv(n-1);
    }
}
