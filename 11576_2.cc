#include <iostream>

using namespace std;

void convert(int n, int base){ //n을 base 진법으로 높은 자리부터 출력
    if(n==0) return;
    convert(n/base, base); //재귀 호출
    cout << n%base << " ";
}

//base 진법으로 된 수, n을 10진수로 변환한다.
int get10(int n, int base, int times){
    int res =1;
    for(int t=0; t<times; t++) res *= base;
    return n * res;
}

int main(){
    int basea, baseb, len;
    cin >> basea >> baseb; //진법의 값을 읽는다
    cin >> len; //basea 진법 수의 길이를 얻는다
    
    int v[len]; //길이만큼 배열을 만들고
    int n=len, num10=0;
    while(n--) cin >> v[n]; //basea 진법의 각각의 값들을 읽어들인다.
    
    //basea 진법의 수를 10진수로 변환시킨다.
    for(int times=0; times<len; times++)
        num10 += get10(v[times], basea, times);
        
    //변환된 10진수를 baseb진법의 수로 출력시킨다.
    convert(num10, baseb);
}