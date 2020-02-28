#include <stdio.h>

int get_mininum(int a[]){
    int min=1000, v;
    for(int i=0; i<4; i++) {
        v=(i<2) ? a[i] : a[i]-a[i-2];
        if(min>v) min=v;
    }
    return min;
}

int main(){
    int n=4;
    int a[4]={0};
    while(n--){
        scanf("%d", &a[3-n]);
    }
    printf("%d\n", get_mininum(a));
}