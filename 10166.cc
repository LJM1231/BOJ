#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[2002][2002];
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    int d1, d2;
    int sum=0;
    scanf("%d %d", &d1, &d2);
    
    
    for(int i=d1; i<=d2; i++){
        for(int j=1; j<=i; j++){
            int m = gcd(i,j);
            
            if(!arr[i/m][j/m]){
                arr[i/m][j/m]=true;
                sum++;
            }
        }
    }
    cout << sum;
}