#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000000

int main(void) {
	int *a = (int*)malloc(sizeof(int) * SIZE);	//	���� �Ҵ�
	a[0] = 10;
	printf("%d\n", a[0]);
	free(a);
	return 0;
}
