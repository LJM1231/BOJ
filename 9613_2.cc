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
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        int a[111];
        
        scanf("%d", &n);
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        
        long long sum=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                sum += gcd(a[i], a[j]);
            }
        }
        printf("%lld\n", sum);
    }
}