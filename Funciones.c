#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void FuncionesMath(){
    
    
    printf("%.2f raiz de 25\n",sqrt(25));
    printf("%.2f exponentcia de e a 5\n",exp(5));
    printf("%.2f logaritmo natural de 45 \n",log(45));
    printf("%.2f logaritmo natural de 67 base 10 \n",log10(67));
    printf("%.2f valor absoluto de -25 \n",fabs(-25));
    printf("%.2f redondeo al entero proximo menor\n",ceil(25.98));
    printf("%.2f redondeo al entero proximo mayor\n",floor(25.98));
    printf("%.2f 4 elevado a la potencia 3 \n",pow(4,3));
    //printf("%.2f redondeo al entero proximo\n",fmoc(8,6));
    printf("%.2f seno de 30\n",sin(30));
    printf("%.2f cos de 30\n",ceil(30));
    printf("%.2f tan 30\n",tan(30));
    
}



int main(int argc, char** argv) {
        
    for(int x=0;x<2;x++){
    FuncionesMath();
    }
    
    return (EXIT_SUCCESS);
}
