//기본사용법
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a, a + 10);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
}

//내림차순
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
	//왼쪽에 있는 것이 더 클수록 정렬.
	//내림차순
}

int amin() {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a, a + 10, compare);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
}

//실무
#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}

	bool operator < (Student& student) {
		return this->score < student.score;
	}
};

bool compare(int a, int b) {
	return a > b;
}

int main() {
	Student students[] = {
		Student("나동빈", 90),
		Student("이상욱", 93),
		Student("박한울", 97),
		Student("강종구", 87),
		Student("이태일", 92),
	};
	sort(students, students + 5);
	for (int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}
}

////////////////////////////
//숏코딩

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<pair<int, string>> v;
	v.push_back(pair<int, string>(90, "박한울"));
	v.push_back(pair<int, string>(85, "이태일"));
	v.push_back(pair<int, string>(82, "나동빈"));
	v.push_back(pair<int, string>(98, "강종구"));
	v.push_back(pair<int, string>(79, "이상욱"));

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' ';
	}
	return 0;
}


//변수가 3개일때 두개의 변수를 기준으로 정렬
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>>b) {
	if (a.second.first == b.second.first) {
		return a.second.second > b.second.second;
	}
	else {
		return a.second.first > b.second.first;
	}
}

int main() {
	vector <pair<string, pair<int, int>>> v;
	//v.push_back(pair<string, pair<int, int>>("나동빈", pair<int, int>(90, 19961222))); //다른방법(?)
	v.push_back(pair<string, pair<int, int>>("나동빈", make_pair(90, 19961222)));
	v.push_back(pair<string, pair<int, int>>("이태일", make_pair(97, 19930518)));
	v.push_back(pair<string, pair<int, int>>("박한울", make_pair(95, 19930203)));
	v.push_back(pair<string, pair<int, int>>("이상욱", make_pair(90, 19921207)));
	v.push_back(pair<string, pair<int, int>>("강종구", make_pair(88, 19900302)));

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}
}