#include <stdio.h>
#define R 3

int b[R] = { 0, 0, 0 };
int cnt = 0;

// �̸��� Re �߰�
void PrintReCom() {
    int i;
    cnt++;
    for (i = 0; i < R; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

// �̸��� Re �߰�
void ReCombination(int a[], int n, int r, int ii) {
    int i;

    if (r >= R) PrintReCom();
    else for (i = ii; i < n; i++) { // i �� ii + 1���� ����
        b[r] = a[i];
        ReCombination(a, n, r + 1, i);
    }
}

int main(void) {
    int a[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(a) / sizeof(int);

    ReCombination(a, n, 0, 0); // -1 -> 0���� ����
    printf("���� ���� : %d\n", cnt);
    return 0;
}
