#include <stdio.h>
#include <string.h>

void main(int arc, char **argv){
    struct student{
        char name[20 + 1];
        int year;
        float score;
    };

    // 구조체 설정 방법
    // 방법 1
    struct student student_lee = {"lee",
    2008,
    95.4};

    // 방법 2
    struct student student_kim = {0};
    strcpy(student_kim.name, "kim");
    student_kim.year = 2008;
    student_kim.score = 95.4;

    // 구조체 복사
    struct student lee_src = {"lee", 2008, 95.4};
    struct student lee_dest = {0,};
    lee_dest = lee_src;

    // typedef를 이용한 구조체를 하나의 데이터 타입으로 정의하기
    typedef struct student_type
    {
        char name[20 + 1];
        int year;
        float score;
    } student;

    student lee_src = {"lee", 2008, 95.4};
    
}