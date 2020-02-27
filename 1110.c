#include <stdio.h>

int main() {
    int a;
    int ten, one, temp, res;
    int cnt = 0;
    
    scanf("%d", &a);
    temp = a;
    while(1){
        if(temp<10) ten=0;
        else
            ten = temp/10;
            one = temp%10;
            res = ten+one;
            cnt++;
            
            ten = temp%10;
            one = res%10;
            temp = (ten*10)+one;
            if(temp==a) break;
    }
    printf("%d", cnt);
    return 0;
}