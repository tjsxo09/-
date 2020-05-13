#include <stdio.h>
#include <string.h>

void main(int arc, char **argv){
    
    // 변수 설정 및 초기화
    int i = 0, size = 0;
    int key1[3] = {3,5,7};
    int key2[3] = {0,};
    char string1[] = "value";
    char string2[100] = {0,};

    // key2 배열 수정
    key2[0] = 3;
    key2[1] = 5;
    key2[3] = 7;

    // sizeof 함수는 전체 크기를 알려준다.
    size = sizeof(key1) / sizeof(int);
    printf("key1의 원소 개수: %d\n", size);
    for(i = 0; i < size; i++){
        printf("%d->%d\n", i, key1[i]);
    }
    
    size = sizeof(key2) / sizeof(int);
    printf("key2의 원소 개수: %d\n", size);
    for(i = 0; i < size; i++){
        printf("%d->%d\n", i, key2);
    }

    size = sizeof(string1) / sizeof(char);
    printf("string1의 원소 개수: %d\n", size);
    printf("string1: %s\n", string1);


    size = sizeof(string2) / sizeof(char);
    printf("string2의 원소 개수: %d\n", size);
    printf("string1: %s\n", string2);

}