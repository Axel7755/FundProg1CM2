#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {

    int x=1,t1=10,t2=10;
    
    while(x<=t1){
        
        int y=1;
        
        while(y<=t2){
            
        printf("%d x %d = %d \n",x,y,x*y);    
        y++;    
                
        }
        
        x=x+1;
        printf("\n\n");
        
    } 
    
    return (EXIT_SUCCESS);
}
