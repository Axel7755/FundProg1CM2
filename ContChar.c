#include <stdio.h>
#include <stdlib.h>

char men[100];
int let[27]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int main(int argc, char** argv) {

    printf("Ingrese un mensaje \t");
    scanf("%[^\n]",&men);
    
    for(int i=0;i<100;i++){
        
        if((men[i]=='a'&& men[i]!="")||(men[i]=='A'&& men[i]!="")){
            let[0]++;
        }
        if(men[i]=='b'&& men[i]!=""||men[i]=='B'&& men[i]!=""){
            let[1]++;
        }
        if(men[i]=='c'&& men[i]!=""||men[i]=='C'&& men[i]!=""){
            let[2]++;
        }
        if(men[i]=='d'&& men[i]!=""||men[i]=='D'&& men[i]!=""){
            let[3]++;
        }
        if(men[i]=='e'&& men[i]!=""||men[i]=='E'&& men[i]!=""){
            let[4]++;
        }
        if(men[i]=='f'&& men[i]!=""||men[i]=='F'&& men[i]!=""){
            let[5]++;
        }
        if(men[i]=='g'&& men[i]!=""||men[i]=='G'&& men[i]!=""){
            let[6]++;
        }
        if(men[i]=='h'&& men[i]!=""||men[i]=='H'&& men[i]!=""){
            let[7]++;
        }
        if(men[i]=='i'&& men[i]!=""||men[i]=='I'&& men[i]!=""){
            let[8]++;
        }
        if(men[i]=='j'&& men[i]!=""||men[i]=='J'&& men[i]!=""){
            let[9]++;
        }
        if(men[i]=='k'&& men[i]!=""||men[i]=='K'&& men[i]!=""){
            let[10]++;
        }
        if(men[i]=='l'&& men[i]!=""||men[i]=='L'&& men[i]!=""){
            let[11]++;
        }
        if(men[i]=='m'&& men[i]!=""||men[i]=='M'&& men[i]!=""){
            let[12]++;
        }
        if(men[i]=='n'&& men[i]!=""||men[i]=='N'&& men[i]!=""){
            let[13]++;
        }
        if(men[i]=='ñ'&& men[i]!=""||men[i]=='Ñ'&& men[i]!=""){
            let[14]++;
        }
        if(men[i]=='o'&& men[i]!=""||men[i]=='O'&& men[i]!=""){
            let[15]++;
        }
        if(men[i]=='p'&& men[i]!=""||men[i]=='P'&& men[i]!=""){
            let[16]++;
        }
        if(men[i]=='q'&& men[i]!=""||men[i]=='Q'&& men[i]!=""){
            let[17]++;
        }
        if(men[i]=='r'&& men[i]!=""||men[i]=='R'&& men[i]!=""){
            let[18]++;
        }
        if(men[i]=='s'&& men[i]!=""||men[i]=='S'&& men[i]!=""){
            let[19]++;
        }
        if(men[i]=='t'&& men[i]!=""||men[i]=='T'&& men[i]!=""){
            let[20]++;
        }
        if(men[i]=='u'&& men[i]!=""||men[i]=='U'&& men[i]!=""){
            let[21]++;
        }
        if(men[i]=='v'&& men[i]!=""||men[i]=='V'&& men[i]!=""){
            let[22]++;
        }
        if(men[i]=='w'&& men[i]!=""||men[i]=='W'&& men[i]!=""){
            let[23]++;
        }
        if(men[i]=='x'&& men[i]!=""||men[i]=='X'&& men[i]!=""){
            let[24]++;
        }
        if(men[i]=='y'&& men[i]!=""||men[i]=='Y'&& men[i]!=""){
            let[25]++;
        }
        if(men[i]=='z'&& men[i]!=""||men[i]=='Z'&& men[i]!=""){
            let[26]++;
        }
        
    }
    for(int i=0;i<27;i++){
        switch(i){
            case 0:
                printf("\n a = %d",let[i]);
                break;
            case 1:
                printf("\n b = %d",let[i]);
                break;
            case 2:
                printf("\n c = %d",let[i]);
                break;
            case 3:
                printf("\n d = %d",let[i]);
                break;
            case 4:
                printf("\n e = %d",let[i]);
                break;
            case 5:
                printf("\n f = %d",let[i]);
                break;
            case 6:
                printf("\n g = %d",let[i]);
                break;
            case 7:
                printf("\n h = %d",let[i]);
                break;
            case 8:
                printf("\n i = %d",let[i]);
                break;
            case 9:
                printf("\n j = %d",let[i]);
                break;
            case 10:
                printf("\n k = %d",let[i]);
                break;
            case 11:
                printf("\n l = %d",let[i]);
                break;
            case 12:
                printf("\n m = %d",let[i]);
                break;
            case 13:
                printf("\n n = %d",let[i]);
                break;
            case 14:
                printf("\n ñ = %d",let[i]);
                break;
            case 15:
                printf("\n o = %d",let[i]);
                break;
            case 16:
                printf("\n p = %d",let[i]);
                break;
            case 17:
                printf("\n q = %d",let[i]);
                break;
            case 18:
                printf("\n r = %d",let[i]);
                break;
            case 19:
                printf("\n s = %d",let[i]);
                break;
            case 20:
                printf("\n t = %d",let[i]);
                break;
            case 21:
                printf("\n u = %d",let[i]);
                break;
            case 22:
                printf("\n v = %d",let[i]);
                break;
            case 23:
                printf("\n w = %d",let[i]);
                break;
            case 24:
                printf("\n x = %d",let[i]);
                break;
            case 25:
                printf("\n y = %d",let[i]);
                break;
            case 26:
                printf("\n z = %d",let[i]);
                break;
                
        }
    }
    return (EXIT_SUCCESS);
}

