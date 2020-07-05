#include <stdio.h>
#define MAX 1000000

int main() {
	int arr[3];
	int index, temp;
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	for (int i = 0; i < 3; i++) {
		int min = MAX;
		for (int j = i; j < 3; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}

	for (int i = 0; i < 3; i++) {
		printf("%d ", arr[i]);
	}

}