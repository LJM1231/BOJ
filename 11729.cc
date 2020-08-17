#include <iostream>
using namespace std;

void hanoiMove(int n, int from, int by, int to){
    if(n==1){
        printf("%d %d\n", from, to);
    }
    else{
        hanoiMove(n-1, from, to, by);
        printf("%d %d\n", from, to);
        hanoiMove(n-1, by, from, to);
    }
}

void hanoiNum(int x){
    int num=1;
    while(--x){
        num=num*2+1;
    }
    printf("%d\n", num);
}

int main(){
    int num;
    scanf("%d", &num);
    hanoiNum(num);
    hanoiMove(num,1,2,3);
}