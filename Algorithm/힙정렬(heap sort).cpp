//������

//#include <stdio.h>
//
//int number = 9;
//int heap[9] = { 7,6,5,8,3,5,9,1,6 };
//
//int main() {
//	//���� ����
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
//	//ũ�⸦ �ٿ����� �ݺ������� ���� ����
//	for (int i = number - 1; i >= 0; i--) {
//		int temp = heap[0];
//		heap[0] = heap[i];
//		heap[i] = temp;
//		int root = 0;
//		int c = 1;
//		do {
//			c = 2 * root + 1;
//			//�ڽ��߿� �� ū���� ã��
//			if (c < i - 1 && heap[c] < heap[c + 1]) {
//				c++;
//			}
//			//��Ʈ���� �ڽ��� ũ�ٸ� ��ȯ
//			if (c < i && heap[root] < heap[c]) {
//				temp = heap[root];
//				heap[root] = heap[c];
//				heap[c] = temp;
//			}
//			root = c;
//		} while (c < i);
//	}
//	//��� ���
//	for (int i = 0; i < number; i++) {
//		printf("%d ", heap[i]);
//	}
//}

//������ ��������
#include <iostream>
#include <vector>

using namespace std;

int number;
int heap[1000001];

void heapify(int i) {
	//���� �ڽ� ��带 ����Ŵ
	int c = 2 * i + 1;
	//������ �ڽ� ��尡 �ְ�, ���� �ڽĳ�庸�� ũ�ٸ�
	if (c < number && heap[c] < heap[c + 1]) {
		c++;
	}
	//�θ𺸴� �ڽ��� �� ũ�ٸ� ��ġ�� ��ȯ
	if (heap[i] < heap[c]) {
		int temp = heap[i];
		heap[i] = heap[c];
		heap[c] = temp;
	}
	//number/2 ������ �����ϸ� ��
	if (c <= number / 2) heapify;
}

int main() {
	cin >> number;
	for (int i = 0; i < number; i++) {
		int x;
		cin >> heap[i];
	}
	//���� ����
	for (int i = number / 2; i >= 0; i--) {
		heapify;
	}
	//������ ����
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