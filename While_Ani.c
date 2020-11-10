#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {

    int y=1,x=1,t1=10,t2=10;
    
    while(x<=t1){
        
        while(y<=t2){
            
        printf("%d x %d = %d \n",x,y,x*y);    
        y++;    
                
        }
        
        x=x+1;
        y=1;
        
    } 
    
    return (EXIT_SUCCESS);
}
