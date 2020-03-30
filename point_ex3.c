#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

void init(int **a, int row, int col);
void print(int **a, int row, int col);

int main(){
    int **a = (int**)malloc(sizeof(int*)*ROW);
    for(int i=0; i<ROW; i++)
        a[i] = (int*)malloc(sizeof(int)*COL);
        
    init(a, ROW, COL);
    print(a, ROW, COL);
    
    for(int i=0; i<ROW; i++)
        free(a[i]);
    free(a);
}

void init(int **a, int row, int col){
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            a[r][c] = r+c;
        }
    }
}

void print(int **a, int row, int col){
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }
}