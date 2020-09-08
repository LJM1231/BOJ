#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string N;
    int B, sum=0;
    //scanf("%s %d", &N, &B);
    cin >> N >> B;
    
    for(int i=0; i<N.size(); i++){
        if(N[i] >= '0' && N[i]<='9'){
            sum = sum*B + (N[i]-'0');
        }
        else{
            sum = sum*B+(N[i]-'A'+10);
        }
    }
    
    printf("%d", sum);
}