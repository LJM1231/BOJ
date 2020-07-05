#include <iostream>
#include <algorithm>

using namespace std;

int n;
string a[20000];

bool compare(string a, string b) {
	//길이가 짧은 단어가 먼저
	if (a.length() < b.length()) {
		return 1;
	}
	else if (a.length() > b.length()) {
		return 0;
	}
	//길이가 같으면 사전순
	else return a < b;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, compare);

	for (int i = 0; i < n; i++) {
		//동일한 단어는 패스하고 출력
		if (i > 0 && a[i] == a[i - 1]) continue;
		cout << a[i] << '\n';
	}
	return 0;
}