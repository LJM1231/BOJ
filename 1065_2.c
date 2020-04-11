#include <stdio.h>

int Han(int n){
    int cnt=0;
    int hund, ten, one;
    if(n<100) return n;
    else{
        for(int i=100; i<=n; i++){
            hund=i/100;
            ten=(i%100)/10;
            one=(i%100)%10;
            if((hund-ten)==(ten-one)) cnt++;
        }
    }
    return(99+cnt);
}

int main(){
    int n;
    scanf("%d", &n);
    
    printf("%d", Han(n));
}