#include "tetris.h"
#include "display.h"

int main(){
    char matrix[ROWS][COLUMNS];
    int posI,posJ;

    //posicao inicial do personagem
    posI = ROWS/2;
    posJ = COLUMNS/2;
    //inicializando matriz
    init(matrix);

    //apagar o cursor da tela
    ShowConsoleCursor(0);
    system("cls");

    while(1){
        gotoxy(0,0);

        matrix[posI][posJ] ='@';

        printMatrix(matrix);

        matrix[posI][posJ] =' ';
        
        if(posJ < COLUMNS-1) posJ++;
    }
    system("PAUSE");

    return 0;
}


