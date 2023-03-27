#include <stdio.h>
			//	a = ��ߺ���, b = ��캯��, c = ��������
void HanoiTower(int n, char a, char b, char c) {
	if (n == 1) {
		printf("���� %d, %c -> %c \n", n, a, c);
	}
	else {
		HanoiTower(n - 1, a, c, b);	//	(n-1)���� ����� -> ������
		printf("���� %d, %c -> %c \n", n, a, c);	//	n�� �����̵�
		HanoiTower((n - 1), b, a, c);	//	(n-1)���� ������ -> ������
	}
}

int main(void) {
	int n = 4;
	HanoiTower(n, 'A', 'B', 'C');

	return 0;
}