#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrx(int A[][COLS], int B[][COLS], int C[][COLS])
{
    // C = A + B ���·� ��� ���
    // for���� �̿��ؼ� ���
    int r, c;
    // �� ���� ����� ���Ѵ�.
    for (r = 0; r < ROWS; r++)
        for (c = 0; c < COLS; c++)
            C[r][c] = A[r][c] + B[r][c];
}

void printMatrx(int A[][COLS])
{
    int r, c;
    // for���� �̿��ؼ� ���
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++)
            printf("%d ", A[r][c]);
        printf("\n");
    }
}

int main(void)
{
    int A[ROWS][COLS] = {//���ϱ� ��� ���

        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}
    };
    int B[ROWS][COLS] = {//���ϱ� ��� ���
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    int C[ROWS][COLS];//���� ��� ��� 

    addMatrx(A, B, C);
    printMatrx(C);
    
    getchar();
    return 0;
}
