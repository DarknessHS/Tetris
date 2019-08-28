#include "tetris.h"

int main(){
    char matrix[ROWS][COLUMNS];
    int posI,posJ;

    //posicao inicial do personagem
    posI = ROWS/2;
    posJ = COLUMNS/2;
    //inicializando matriz
    init(matrix);

    while(1){
        system("cls");

        matrix[posI][posJ] ='@';

        printMatrix(matrix);

        matrix[posI][posJ] =' ';
        
        if(posJ < COLUMNS-1) posJ++;
    }
    system("PAUSE");

    return 0;
}


