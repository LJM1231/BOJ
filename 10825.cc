#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct Person{
    string name;
    int kor, eng, math;
};

bool cmp(Person a, Person b){
    if(a.kor == b.kor){
        if(a.eng == b.eng){
            if(a.math == b.math){
                return a.name <b.name;
            }
            return a.math > b.math;
        }
        return a.eng < b.eng;
    }
    return a.kor > b.kor;
}

int main(){
    int n;
    cin >> n;
    vector<Person> v(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for(int i=0; i<n; i++){
        cout << v[i].name << '\n';
    }
}