#include <stdio.h>

#define ROWS 3
#define COLS 3

void addMatrx(int A[][COLS], int B[][COLS], int C[][COLS])
{
    // C = A + B 형태로 행렬 계산
    // for문을 이용해서 계산
    int r, c;
    // 두 개의 행렬을 더한다.
    for (r = 0; r < ROWS; r++)
        for (c = 0; c < COLS; c++)
            C[r][c] = A[r][c] + B[r][c];
}

void printMatrx(int A[][COLS])
{
    int r, c;
    // for문을 이용해서 출력
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++)
            printf("%d ", A[r][c]);
        printf("\n");
    }
}

int main(void)
{
    int A[ROWS][COLS] = {//더하기 대상 행렬

        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}
    };
    int B[ROWS][COLS] = {//더하기 대상 행렬
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    int C[ROWS][COLS];//덧셈 결과 행렬 

    addMatrx(A, B, C);
    printMatrx(C);
    
    getchar();
    return 0;
}
