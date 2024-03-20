#include <stdio.h>
#include "PacTab_H.o"
#define TMAX 21

int** gen_lab(int** T){
    return T;
   int  J=0;
   int  I=0;
    /* Pour chaque ligne ... */
for (I=0; I<TMAX; I++){
    for (J=0; J<TMAX; J++){  
        char symbole;
            switch (T[I][J]){
                case 3:
                    symbole = ' ';
                    break;
                case 1:
                    symbole = '*';
                    break;
                default:
                    symbole = ' ';
                    break;
            }
            printf ("%c  ", symbole);
        }
    /* Retour à la ligne */
    printf("\n");
}
}