//너비우선탐색 (BFS)

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int check[7];
vector<int> a[8]; //1부터 7까지의 공간

void bfs(int start) {
	queue<int> q;
	q.push(start);
	check[start] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		for (int i = 0; i < a[x].size(); i++) {//인접노드확인
			int y = a[x][i];
			if (!check[y]) { //체크가 되어있지 않으면
				q.push(y);  //노드 추가
				check[y] = true;
			}
		}
	}
}

int main() {
	//1과 2를 연결
	a[1].push_back(2);
	a[2].push_back(1);
	//1과 3을 연결
	a[1].push_back(3);
	a[3].push_back(1);

	//2과 3을 연결
	a[2].push_back(3);
	a[3].push_back(2);
	//2과 4을 연결
	a[2].push_back(4);
	a[4].push_back(2);
	//2과 5을 연결
	a[2].push_back(5);
	a[5].push_back(2);

	//3과 6을 연결
	a[3].push_back(6);
	a[6].push_back(3);
	//3과 7을 연결
	a[3].push_back(7);
	a[7].push_back(3);
	//4과 5을 연결
	a[4].push_back(5);
	a[5].push_back(4);
	//6과 7을 연결
	a[6].push_back(7);
	a[7].push_back(6);

	//BFS 를 수행
	bfs(1);
	return 0;
}