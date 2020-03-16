#include <stdio.h>
#define MAX_SIZE 999

int map[MAX_SIZE][MAX_SIZE];
int visit[MAX_SIZE][MAX_SIZE];

int main(void) {
	int n, find;
	scanf("%d %d", &n, &find);

	int x=0, y=0, direction=0;
	int value = n*n;
	int ret_x, ret_y;

	visit[x][y] = 1;
	map[x][y] = value--;

	while (value != 0) {
		if (map[x][y] == find) {
			ret_x = x + 1;
			ret_y = y + 1;
		}

		if (direction == 0) {
			if ( x == n-1 || visit[x+1][y] == 1) {
				direction = (direction + 1) % 4;
			}
			else {
				x++;
				visit[x][y] = 1;
				map[x][y] = value--;
			}
		}

		else if (direction == 1) {
			if ( y == n-1 || visit[x][y + 1] == 1) {
				direction = (direction + 1) % 4;
			}
			else {
				y++;
				visit[x][y] = 1;
				map[x][y] = value--;
			}
		}

		else if (direction == 2) {
			if ( x == 0 || visit[x-1][y] == 1) {
				direction = (direction + 1) % 4;
			}

			else {
				x--;
				visit[x][y] = 1;
				map[x][y] = value--;
			}
		}

		else {
			if (y == 0 || visit[x][y - 1] == 1) {
				direction = (direction + 1) % 4;
			}

			else {
				y--;
				visit[x][y] = 1;
				map[x][y] = value--;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
		    printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	printf("%d %d", ret_x, ret_y);
	
	return 0;
}