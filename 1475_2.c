#include <stdio.h>

int getmax(int ar[]){
    int max=0;
    int cnt=0;
    for(int i=0; i<9; i++){
        if(i==6){
            int v = ar[6] + ar[9];
            cnt = (v%2==1) ? v+1 : v;
            cnt = cnt>>1;
        }
        else cnt=ar[i];
        
        if(max<cnt) max=cnt;
    }
    return max;
}

int main(){
    int n;
    scanf("%d", &n);
    
    if(n != 0){
        int ar[10] = {0};
        while(n>0){
            ar[n%10]++;
            n/=10;
        }
        printf("%d", getmax(ar));
    }
    
    else printf("1");
}