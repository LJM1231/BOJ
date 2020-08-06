#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string input;
    int a[3];
    
    for(int i=0; i<3; i++){
        cin >> input;
        for(int j=0; j<10; j++){
            if(input==color[j]) a[i] = j;
        }
    }
    
    int num = a[0]*10 + a[1];
    
    if(num==0) cout << 0;
    else{
        cout << num;
        for(int i=0; i<a[2]; i++){
            cout << 0;
        }
    }
}