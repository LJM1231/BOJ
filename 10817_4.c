#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b){
        if(a>c){ //a가 제일 큼
            if(b>c) printf("%d", b);
            else printf("%d", c);
        }
        else printf("%d", a);
    }
    else{
        if(a<c){
            if(b<c) printf("%d", b);
            else printf("%d", c);
        }
        else printf("%d", a);
    }
}