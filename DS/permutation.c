#include<stdio.h>
#define R 3

int b[R] = { 0,0,0 };
int cnt = 0;

void exchange(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void PrintPer() {
    int i;
    cnt++;
    for (i = 0; i < R; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

void Permutatione(int a[], int n, int r) {
    int i;

    if (r >= R) PrintPer();
    else for (i = 0; i < n; i++) {
        exchange(a + 0, a + i);
        b[r] = a[i];
        Permutatione(a, n, r + 1);
        exchange(a + 0, a + i);
    }
}

int main(void) {
    int a[] = { 1,2,3,4,5 };
    int n = sizeof(a) / sizeof(int);

    Permutatione(a, n, 0);
    printf("순열 개수 : %d\n", cnt);
    return 0;
}