#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    multiset<string> s;
    int nm = n+m;
    while(nm--){
        string str;
        cin >> str;
        s.insert(str);
    }
    
    int cnt=0;
    string res="";
    for(auto it=s.begin(); it!=s.end(); ++it){
        if(s.count(*it)==2){
            ++it;
            cnt++;
            res += *it+"\n";
        }
    }
    cout << cnt << '\n' << res;
}