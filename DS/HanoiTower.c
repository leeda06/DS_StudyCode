#include <stdio.h>
			//	a = 출발변수, b = 경우변수, c = 도착변수
void HanoiTower(int n, char a, char b, char c) {
	if (n == 1) {
		printf("원판 %d, %c -> %c \n", n, a, c);
	}
	else {
		HanoiTower(n - 1, a, c, b);	//	(n-1)개를 출발지 -> 경유지
		printf("원판 %d, %c -> %c \n", n, a, c);	//	n번 원판이동
		HanoiTower((n - 1), b, a, c);	//	(n-1)개를 경유지 -> 도착지
	}
}

int main(void) {
	int n = 4;
	HanoiTower(n, 'A', 'B', 'C');

	return 0;
}