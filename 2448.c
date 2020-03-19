#include <stdio.h>

char DB[][6]=
{"  *  ",
 " * * ",
 "*****"};
 
 char MAP[3500][6500];
 
 void solve(int n, int y, int x){
     if(n==1){
         for(int i=0; i<3; i++){
             for(int j=0; j<5; j++)
                MAP[y+i][x+j] = DB[i][j];
         }
        return;
     }
     solve(n/2, y, x+3*n/2);
     solve(n/2, y+3*n/2, x);
     solve(n/2, y+3*n/2, x+3*n);
 }
 
 int main(){
     int n;
     scanf("%d", &n);
     solve(n/3, 0, 0);
     for(int i=0; i<n; i++){
         for(int j=0; j<n*2-1; j++)
            printf("%c", MAP[i][j] == '*' ? '*' : ' ');
            printf("\n");
     }
     return 0;
 }