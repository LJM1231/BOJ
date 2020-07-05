#include <stdio.h>

int main() {
	int arr[10] = { 9,5,3,4,8,6,2,7,1,10 };
	int index, temp;
	for (int i = 0; i < 10; i++) {
		int min = 9999;
		for (int j = i; j < 10; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}