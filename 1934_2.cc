#include <iostream>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    int n;
    scanf("%d", &n);
    
    while(n--){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a*b / gcd(a,b));
    }
}