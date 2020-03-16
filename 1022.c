#include <stdio.h>

int map[50][5];
int r1, c1, r2, c2;

void makeMap() {
	int bound[4] = {0,};
	int r=0, c=0, num=0;

	while(1) {
		if (num == 0) {
			num++;
			if (r1 <= r && r <= r2 && c1 <= c && c <= c2)
				map[r - r1][c - c1] = num;
		}
		else {
			if (c == 5001) break;

			while (1) {
				num++;
				if (r1 <= r && r <= r2 && c1 <= c && c <= c2)
					map[r - r1][c - c1] = num;

				if (r - 1 > bound[0]) r--;
				else break;
			}
			r--;

			while (1) {
				num++;
				if (r1 <= r && r <= r2 && c1 <= c && c <= c2)
					map[r - r1][c - c1] = num;

				if (c - 1 > bound[1]) c--;
				else break;
			}
			c--;

			while (1) {
				num++;
				if (r1 <= r && r <= r2 && c1 <= c && c <= c2)
					map[r - r1][c - c1] = num;

				if (r + 1 < bound[2]) r++;
				else break;
			}
			r++;

			while (1) {
				num++;
				if (r1 <= r && r <= r2 && c1 <= c && c <= c2)
					map[r - r1][c - c1] = num;
				if (c < bound[3]) c++;
				else break;
			}
		}

		bound[0]--;
		bound[1]--;
		bound[2]++;
		bound[3]++;
		c++;
	}
}

int getMaxVal(int map[][5]) {
	int max = 0;
	for (int i = 0; i < 50; i++)
		for (int j = 0; j < 5; j++)
			if (max < map[i][j])
				max = map[i][j];
	return max;
}

int getLen(int max_val) {
	int ret = 0;
	while (max_val != 0) {
		max_val /= 10;
		ret++;
	}
	return ret;
}

int main() {

	scanf("%d%d%d%d", &r1, &c1, &r2, &c2);

	makeMap();

	int max_val = getMaxVal(map);
	int max_len = getLen(max_val);

	for (int r = 0; r < r2 - r1 + 1; r++) {
		for (int c = 0; c < c2 - c1 + 1; c++) {
			int len = getLen(map[r][c]);
			for (int k = 0; k < max_len - len; k++)
				printf(" ");
			printf("%d ", map[r][c]);
		}
		printf("\n");
	}

	return 0;
}