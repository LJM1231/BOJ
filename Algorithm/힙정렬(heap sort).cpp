//힙정렬

//#include <stdio.h>
//
//int number = 9;
//int heap[9] = { 7,6,5,8,3,5,9,1,6 };
//
//int main() {
//	//힙을 구성
//	for (int i = 1; i < number; i++) {
//		int c = i;
//		do {
//			int root = (c - 1) / 2;
//			if (heap[root] < heap[c]) {
//				int temp = heap[root];
//				heap[root] = heap[c];
//				heap[c] = temp;
//			}
//			c = root;
//		} while (c != 0);
//	}
//	//크기를 줄여가며 반복적으로 힙을 구성
//	for (int i = number - 1; i >= 0; i--) {
//		int temp = heap[0];
//		heap[0] = heap[i];
//		heap[i] = temp;
//		int root = 0;
//		int c = 1;
//		do {
//			c = 2 * root + 1;
//			//자식중에 더 큰값을 찾기
//			if (c < i - 1 && heap[c] < heap[c + 1]) {
//				c++;
//			}
//			//루트보다 자식이 크다면 교환
//			if (c < i && heap[root] < heap[c]) {
//				temp = heap[root];
//				heap[root] = heap[c];
//				heap[c] = temp;
//			}
//			root = c;
//		} while (c < i);
//	}
//	//결과 출력
//	for (int i = 0; i < number; i++) {
//		printf("%d ", heap[i]);
//	}
//}

//힙정렬 내림차순
#include <iostream>
#include <vector>

using namespace std;

int number;
int heap[1000001];

void heapify(int i) {
	//왼쪽 자식 노드를 가리킴
	int c = 2 * i + 1;
	//오른쪽 자식 노드가 있고, 왼쪽 자식노드보다 크다면
	if (c < number && heap[c] < heap[c + 1]) {
		c++;
	}
	//부모보다 자식이 더 크다면 위치를 교환
	if (heap[i] < heap[c]) {
		int temp = heap[i];
		heap[i] = heap[c];
		heap[c] = temp;
	}
	//number/2 까지만 수행하면 됨
	if (c <= number / 2) heapify;
}

int main() {
	cin >> number;
	for (int i = 0; i < number; i++) {
		int x;
		cin >> heap[i];
	}
	//힙을 생성
	for (int i = number / 2; i >= 0; i--) {
		heapify;
	}
	//정렬을 수행
	for (int i = number - 1; i >= 0; i--) {
		for (int j = 0; j < number; j++) {
			cout << heap[j] << ' ';
		}
		cout << '\n';
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		int root = 0;
		int c = 1;
		do {
			c = 2 * root + 1;
			if (c < i - 1 && heap[c] < heap[c + 1]) c++;
			if (c < i && heap[root] < heap[c]) {
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c < i);
	}
}