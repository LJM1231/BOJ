#include <stdio.h>

int number(int n){
    int tmp = n;
    
    while(n!=0){
        tmp = tmp+n%10;
        n=n/10;
    }
    return tmp;
}

int main(){
    int sw;
    
    for(int i=1; i<10000; i++){
        sw=1;
        for(int j=0; j<i; j++){
            if(i==number(j)){
                sw=0;
                break;
            }
        }
        if(sw==1){
            printf("%d\n", i);
        }
    }
}