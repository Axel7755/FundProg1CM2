#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    int x=56,*f,***j,**h;
    int z={
        3,4,5
    };
    f=&x;
    h=&f;
    j=&h;
    printf("%d\n",*f);
    printf("%p\n",f);
    printf("%d\n",**h);
    printf("%p\n",h);
    printf("%d\n",***j);
    printf("%p\n",j);

    return (EXIT_SUCCESS);
}

