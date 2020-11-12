#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int t1=10,t2=10;
    
    for(int x=1;x<=t1;x++){
        
        int y=0;
        
        for(y=1;y<=t2;y++){
            
        printf("%d x %d = %d \n",x,y,x*y);    
                  
        }
        
        printf("\n\n");
        
    } 
    
    return (EXIT_SUCCESS);
}
