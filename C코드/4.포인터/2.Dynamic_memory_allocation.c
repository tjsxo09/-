#include <stdio.h>

void main(int arc, char**argv){
    // 메모리 할당 방법
    // 방법1 정적 메모리 할당 
    int int_array[100] = {0,}; // 값은 0으로 모두 초기화

    // 방법 2 동적 메모리 할당
    int *ptr_int = NULL;
    int size = 100;

    size = 200;
    ptr_int = (int*)malloc(sizeof(int) * size);

    // 동적 할당을 한 뒤에는 반환되는 포인터에 대해 NULL 검사를 필요로한다.
    // 메모리 해제
    if(ptr_int != NULL){
        // 메모리 해제가 가능한지 점검을 if문으로 하였다.
        free(ptr_int);
    }
    else{
        printf("동적메모리가 NULL입니다.");
    }


    // 동적할당의 초기화 및 메모리 해제
    int *ptr_int = NULL;
    int size = 100;
    ptr_int = (int*)malloc(sizeof(int) * size);
    if(ptr_int != NULL){
        memset(ptr_int, 0, sizeof(int) * size);
        
        free(ptr_int);
    }
}

