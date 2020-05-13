#include <stdio.h>

void main(int arc, char **argv)
{
    // 행과 열 크기를 설정
    int row = 3;
    int col = 4;

    // 배열들을 가리키는 포인터 배열을 만듬
    int **pptr_int_array = NULL;
    pptr_int_array = (int **)malloc(sizeof(int*) * row);

    // 각각의 포인터 변수에 1차원 배열을 생성
    for(int i = 0; i < row; i++){
        pptr_int_array[i] = (int *)malloc(sizeof(int) * col);
        memset(pptr_int_array[i], 0, sizeof(int)*col);
    }

    // (0,0) 위치의 값을 1로 변경하는 방법
    pptr_int_array[0][0] = 1;
    **pptr_int_array = 1; // 첫번째 주소를 가리키므로 (0,0)의 값이 변화한다.
    
    // (2,3) 위치의 값을 변화 시키는 방법
    pptr_int_array[2][3] = 1;
    *(*(pptr_int_array + 2) + 3) = 1;
}