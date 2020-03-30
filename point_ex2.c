#include <stdio.h>
#define ROW 2
#define COL 3

void print(int (*a)[3], int row, int col);
void multiply4(int a[][3], int row, int col);

int main(){
    int a[ROW][COL] = {
        {0, 1, 2},
        {1, 2, 3}
    };
    
    print(a, ROW, COL);
    multiply4(a, ROW, COL);
    print(a, ROW, COL);
}

void print(int (*a)[3], int row, int col){
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }
}

void multiply4(int a[][3], int row, int col){
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            a[r][c] *= 4;
        }
    }
}