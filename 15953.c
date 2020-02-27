#include<stdio.h>

int A(int x){
    int sum = 0;
    if(x==1) sum += 500;
    else if(x>1 && x<=3) sum +=300;
    else if(x>3 && x<=6) sum +=200;
    else if(x>6 && x<=10) sum += 50;
    else if(x>10 && x<=15) sum += 30;
    else if(x>15 && x<=21) sum += 10;
    
    return sum;
}

int B(int y){
    int sum2 =0 ;
    if(y==1) sum2 += 512;
    else if(y>1 && y<=3) sum2 += 256;
    else if(y>3 && y<=7) sum2 += 128;
    else if(y>7 && y<=15) sum2 += 64;
    else if(y>15 && y<=31) sum2 += 32;
    
    return sum2;
}

int main(){
    int t, a, b;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d", &a, &b);
        
        printf("%d\n", (A(a)+B(b))*10000);
    }
}