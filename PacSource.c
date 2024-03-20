#include <stdlib.h> 
#include <stdio.h>
#define TMAX 10

int** gen_lab(int** T){
    int I=0,J=0;
    T = malloc(sizeof(int*)*TMAX);
    for(I = 0; I < TMAX; I++) {
        T[I] = malloc(sizeof(int)*TMAX);
    }
    for (I=0; I < TMAX; I++){
        for (J=0; J <TMAX; J++){
            T[I][J] = 3;
        }
    }

    for(I = 0; I < TMAX; I++) {
        J=0;
        T[I][J] = 1;
    }
    
    for(J = 0; J < TMAX; J++){
        I=0;
        T[I][J] = 1;
    }

    for(I = 0; I < TMAX; I++){
        int J=TMAX-1;
        T[I][J] = 1;
    }
    for( J = 0; J < TMAX; J++){
        int I = TMAX -1;
        T[I][J] = 1;
    }
    for( J=0; J < 3; J++){
        I = 2;
        T[I][J] = 1;
    }
      for( J=0; J < 3; J++){
        I = 5;
        T[I][J] = 1;
    }
      for( J=0; J < 2; J++){
        I = 17;
        T[I][J] = 1;
    }
      for( J=12; J < 16; J++){
        I = 2;
        T[I][J] = 1;
    }
      for( J=8; J < 9; J++){
        I = 2;
        T[I][J] = 1;
    }
      for( J=12; J < 14; J++){
        I = 4;
        T[I][J] = 1;
    }
      for( J=15; J < 19; J++){
        I = 4;
        T[I][J] = 1;
    }
      for( J=2; J < 7; J++){
        I = 7;
        T[I][J] = 1;
    }
      for( J=4; J < 5; J++){
        I = 9;
        T[I][J] = 1;
    }
    for( J=7; J < 8; J++){
        I = 9;
        T[I][J] = 1;
    }
    for( J=9; J < 12; J++){
        I = 9;
        T[I][J] = 1;
    }
    for( J=13; J < 19; J++){
        I = 10;
        T[I][J] = 1;
    }
    for( J=4; J < 7; J++){
        I = 11;
        T[I][J] = 1;
    }
    for( J=9; J < 12; J++){
        I = 11;
        T[I][J] = 1;
    }
    for( J=2; J < 7; J++){
        I = 13;
        T[I][J] = 1;
    }
    for( J=12; J < 15; J++){
        I = 13;
        T[I][J] = 1;
    }
    for( J=13; J < 14; J++){
        I = 12;
        T[I][J] = 1;
    }
    for( J=18; J < 20; J++){
        I = 12;
        T[I][J] = 1;
    }
    for( J=2; J < 3; J++){
        I = 14;
        T[I][J] = 1;
    }
    for( J=2; J < 8; J++){
        I = 15;
        T[I][J] = 1;
    }
    for( J=7; J < 8; J++){
        I = 16;
        T[I][J] = 1;
    }
    for( J=3; J < 8; J++){
        I = 17;
        T[I][J] = 1;
    }
    for( J=14; J < 17; J++){
        I = 16;
        T[I][J] = 1;
    }
    for( J=18; J < 20; J++){
        I = 16;
        T[I][J] = 1;
    }
    for( J=16; J < 18; J++){
        I = 18;
        T[I][J] = 1;
    }
     for( I= 1; I < 5; I++){
        J = 4;
        T[I][J] = 1;
    }
     for( I= 5; I < 11; I++){
        J = 2;
        T[I][J] = 1;
    }
     for( I= 19; I < 20; I++){
        J = 2;
        T[I][J] = 1;
    }
     for( I= 1; I < 6; I++){
        J = 6;
        T[I][J] = 1;
    }
     for( I= 4; I < 8; I++){
        J = 8;
        T[I][J] = 1;
    }
     for( I= 1; I < 4; I++){
        J = 10;
        T[I][J] = 1;
    }
     for( I= 5; I < 8; I++){
        J = 10;
        T[I][J] = 1;
    }
     for( I= 13; I < 16; I++){
        J = 10;
        T[I][J] = 1;
    }
     for( I= 17; I < 20; I++){
        J = 10;
        T[I][J] = 1;
    }
     for( I= 2; I < 8; I++){
        J = 12;
        T[I][J] = 1;
    }
     for( I= 15; I < 19; I++){
        J = 12;
        T[I][J] = 1;
    }
     for( I= 4; I < 7; I++){
        J = 15;
        T[I][J] = 1;
    }
     for( I= 8; I < 12; I++){
        J = 16;
        T[I][J] = 1;
    }
     for( I= 18; I < 20; I++){
        J = 14;
        T[I][J] = 1;
    }
     for( I= 19; I < 20; I++){
        J = 16;
        T[I][J] = 1;
    }
     for( I= 12; I < 13; I++){
        J = 18;
        T[I][J] = 1;
    }
     for( I= 6; I < 9; I++){
        J = 18;
        T[I][J] = 1;
    }
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
                printf ("%c ", symbole);
            }
             /* Retour à la ligne */
        printf("\n");
    }  
}
