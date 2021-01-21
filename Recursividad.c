#include <stdio.h>
#include <stdlib.h>

long int fiv (int n);
int c=0;

    int u=1,p=0,i=2,A=1,x;
int main(int argc, char** argv){
    int n;

    printf("Ingresa el numero de elementos que deseas ver de la serie de fibonaci: \t");
    scanf("%d", &n);
    
    
    printf("%d \n",p);

    printf("%d \n",  fiv(n));
    return (EXIT_SUCCESS);
}

long int fiv (int n)   /* Calcular el factorial */
{
    if(n > 1){
        printf("%d \n",A);
        A=u+p;
        p=u;
        u=A;
        return(fiv (n-1));
    }
}
