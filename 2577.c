#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    
    int res = a*b*c;
    int num[10]= {0};
    
    int idx = 0;
    while(res>0) {
        idx = res%10;
        num[idx]++;
        res /= 10;
    }
    for(int i=0; i<10; i++)
    printf("%d\n", num[i]);
}