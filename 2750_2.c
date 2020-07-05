#include <stdio.h>

int main() {
	int n, index, temp, min;
	int arr[1001];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		min = 1001;
		for (int j = i; j < n; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}