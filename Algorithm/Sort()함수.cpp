//�⺻����
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

//��������
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
	//���ʿ� �ִ� ���� �� Ŭ���� ����.
	//��������
}

int amin() {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a, a + 10, compare);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
}

//�ǹ�
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
		Student("������", 90),
		Student("�̻��", 93),
		Student("���ѿ�", 97),
		Student("������", 87),
		Student("������", 92),
	};
	sort(students, students + 5);
	for (int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}
}

////////////////////////////
//���ڵ�

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<pair<int, string>> v;
	v.push_back(pair<int, string>(90, "���ѿ�"));
	v.push_back(pair<int, string>(85, "������"));
	v.push_back(pair<int, string>(82, "������"));
	v.push_back(pair<int, string>(98, "������"));
	v.push_back(pair<int, string>(79, "�̻��"));

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' ';
	}
	return 0;
}


//������ 3���϶� �ΰ��� ������ �������� ����
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
	//v.push_back(pair<string, pair<int, int>>("������", pair<int, int>(90, 19961222))); //�ٸ����(?)
	v.push_back(pair<string, pair<int, int>>("������", make_pair(90, 19961222)));
	v.push_back(pair<string, pair<int, int>>("������", make_pair(97, 19930518)));
	v.push_back(pair<string, pair<int, int>>("���ѿ�", make_pair(95, 19930203)));
	v.push_back(pair<string, pair<int, int>>("�̻��", make_pair(90, 19921207)));
	v.push_back(pair<string, pair<int, int>>("������", make_pair(88, 19900302)));

	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}
}