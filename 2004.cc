#include <iostream>

using namespace std;

long long two, five;
int main(){
    int n, m;
    cin >> n >> m;
    
    for(long long i=2; i<=n; i*=2){
        two=two + n/i;
    }
    for(long long i=2; i<=n-m; i*=2){
        two=two-(n-m)/i;
    }
    for(long long i=2; i<=m; i*=2){
        two=two-m/i;
    }
    
    for(long long i=5; i<=n; i*=5) five=five+ n/i;
    for(long long i=5; i<=n-m; i*=5) five=five- (n-m)/i;
    for(long long i=5; i<=m; i*=5) five =five- m/i;
    
    if(two>five) cout << five;
    else cout << two;
}