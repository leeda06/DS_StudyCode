#include <stdio.h>
#define R 3

int b[R] = { 0, 0, 0 };
int cnt = 0;

// 이름에 Re 추가
void PrintReCom() {
    int i;
    cnt++;
    for (i = 0; i < R; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

// 이름에 Re 추가
void ReCombination(int a[], int n, int r, int ii) {
    int i;

    if (r >= R) PrintReCom();
    else for (i = ii; i < n; i++) { // i 를 ii + 1부터 시작
        b[r] = a[i];
        ReCombination(a, n, r + 1, i);
    }
}

int main(void) {
    int a[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(a) / sizeof(int);

    ReCombination(a, n, 0, 0); // -1 -> 0으로 변경
    printf("조합 개수 : %d\n", cnt);
    return 0;
}
