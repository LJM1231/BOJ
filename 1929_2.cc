#include <iostream>

using namespace std;

int check[1000010];

int main(){
    check[0] = check[1] =1;
    for(int i=2; i*i <= 1000010; i++){
        if(check[i]==0) {
            for(int j=i+i; j<=1000010; j+=i){
                check[j] = 1;
            }
        }
    }
    int m, n;
    scanf("%d %d", &m, &n);
    for(int i=m; i<=n; i++){
        if(check[i]==0) printf("%d\n", i);
    }
}