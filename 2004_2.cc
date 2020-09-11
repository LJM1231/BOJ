#include <iostream>

using namespace std;

long long getcount(int f, int num){
    //f:팩토리얼 값
    //num : 팩토리얼에서 카운트하려는 수
    long long res=0;
    for(long long i = num; i<=f; i*=num)
        res += f/i;
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    long long cnt2 = getcount(n,2) - getcount(m,2) - getcount(n-m, 2);
    long long cnt5 = getcount(n,5) - getcount(m,5) - getcount(n-m, 5);
    
    printf("%lld", (cnt2>cnt5) ? cnt5 : cnt2);
}