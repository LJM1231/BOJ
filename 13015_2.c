#include <stdio.h>
#include <string.h>

char d[200][400]; //문자 데이터를 담을 2차배열 준비

void set(int r, int n, int i){ //메모리상에서 r번째 줄, 2차배열 1st index
    int e = 4*n-4;
    int gap = n-1;
    memset(d[r], ' ', e+1); //memset함수를 통해 데이터를 만들어 나감
    memset(d[r] + e-(i-1), 0, 1); //printf출력을 끊음
    
    int t=2, cursor=i;
    if(r==0 || r==2*n-2){ //최상단, 최하단 처리
        memset(d[r], '*', gap+1);
        memset(d[r]+e-gap, '*', gap+1);
    }
    
    else{//나머지 줄 처리
        while (t--){
            cursor=i+gap*t;
            memset(d[r] + cursor, '*', 1);
            memset(d[r] + (e-cursor), '*', 1);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    
    int r=2*n-1, add=1, idx=0;
    for(int i=0; i<r; i++){
        set(i, n, idx);
        if(i==r/2) add= -1;
        idx += add;
    }
    
    for(int i=0; i<r; i++) printf("%s\n", d[i]);
}