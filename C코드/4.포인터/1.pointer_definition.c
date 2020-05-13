#include <stdio.h>

void main(int arc, char **argv){
    // 포인터 변수 선언
    int *ptr_int = NULL;

    // 포인터 변수에 다른 변수의 주소 대입
    int int_value = 100;
    ptr_int = &int_value; //포인터에 int_value의 시작주소를 넣는다.

    // 참조 연산자를 이용한 값 변환
    char char_value = 'A';
    char *ptr_char = &char_value;

    *ptr_char = 'X'; // char_value에 X로 재정의 된다.
}