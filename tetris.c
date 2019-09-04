#include "tetris.h"
#include "display.h"

void init(char matrix[ROWS][COLUMNS]){
    int i,j;

    for (i=0;i<ROWS;i++){
        for(j=0;j<COLUMNS;j++){
            matrix[i][j] = '\xDB';
        }
    }

}
void printMatrix(char matrix[ROWS][COLUMNS]){
    int i,j;

    for (i=0;i<ROWS;i++){
        for(j=0;j<COLUMNS;j++){
            if(j == COLUMNS/2){
            matrix[i][j] = '\xB3';
        }  
            printf("%c",matrix[i][j]);
        }
        printf("\n");
    }


}