#include <stdio.h>

int main() {
    int dat[10] = {0};
    int n;
    scanf("%d", &n);
    
    while(n){
        int idx=n%10;
        n/=10;
        dat[idx]++;
    }
    for(int i=0; i>=0; i--){
        if(dat[i]>0){
            int t=dat[i];
            while(t--)printf("%d", i);
        }
    }
}