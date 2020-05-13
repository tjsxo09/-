#include <stdio.h>
#include <string.h>

void main(int arc, char **argv)
{
    struct student {
        char name[20 + 1];
        int year;
        float score;
    };

    // 구조체 포인터 사용
    struct student student_lee;
    struct student *ptr_student = NULL;
    ptr_student = &student_lee;

    // 구조체에 대한 포인터의 경우 화살표 연산자를 사용한다.
    strcpy((*ptr_student).name, 'test');
    ptr_student->score = 80.1f;
    ptr_student->year = 2005; 

    // 참조 연산자를 사용하면 점 연산자를 사용할 수 있다.
    strcpy((*ptr_student).name, 'test');
    (*ptr_student).score = 80.1f;
    (*ptr_student).year = 2005;
}