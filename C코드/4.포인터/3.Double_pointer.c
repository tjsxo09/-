#include <stdio.h>

void main(int arc, char **argv)
{
    // 더블 포인터 변수 선언
    int int_value = 500;
    int *ptr_int = &int_value;
    int **pptr_int = &ptr_int;

    // 각 변수의 출력 값
    printf("변수 int_value의 값 : %d\n", int_value);
    printf("포인터 변수 ptr_int 값 : %d\n", ptr_int);
    printf("포인터 변수 ptr_int가 가리키는 변수 값 : %d\n", *ptr_int);
    printf("더블 포인터 변수 pptr_int 값 : %d\n", pptr_int);
    printf("더블 포인터 변수 pptr_int가 가리키는 주소의 값 : %d\n", *pptr_int);
    printf("더블 포인터 변수 pptr_int가 가리키는 주소가 가리키는 값 값 : %d\n", **pptr_int);
}