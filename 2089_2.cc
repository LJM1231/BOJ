#include <iostream>
#include <string>

using namespace std;
string res;
int next(int n){
    res.insert(res.begin(), '0'+abs(n% -2));
    int r = (n%2==0) ? n/-2 : (int)((double)n/-2 + 0.5);
    return r;
}

int main(){
    int n;
    cin >> n;
    while(n=next(n)){}
    cout << res;
}