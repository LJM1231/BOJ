#include <stdio.h>

int main(){
    int rest[42] = {0};
    
    int n =10;
    int cnt = 0;
    while(n--){
        int v;
        scanf("%d", &v);
        
        if(++rest[v%42] == 1) //1이상이면 이미 한번 등장한 나머지 값
        cnt++;
    }
    printf("%d\n", cnt);
}