#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int main(void) {
    // ========================
    // 변수
    // ========================

    // int a = 0;
    // char b = 0;
    // double c = 0;
    // float d = 1.1;

    // printf("%d %c %f %f", a,b,c,d);
    // scanf("%d %c %lf %f", &a, &b, &c, &d);
    // printf("%d %c %f %f", a,b,c,d);


    // ========================
    // 타입 변환 - 자동 형 변환
    // ========================

    // int a = 5;
    // float b = 10L; // L 접미사는 long 상수를 명시

    // // 연산시 'a'(int)가 'long'타입으로 자동 변환
    // long result = a+b; // 결과는 long 타입의 변수에 저장

    // printf("a + b 의 결과값: %ld\n", result); // %ld는 long 타입 출력 형식 지정자


    // ========================
    // 타입 변환 2 - 자동 형 변환
    // ========================

    // int a = 3;
    // float b = 3.14f; // f 접미사는 float 상수를 명시
    
    // // 'a'(int)가 float 타입으로 자동 변환됨 (3 -> 3.0f)
    // float result = a + b;

    // printf("결과값: %f\n", result); // 출력 : 6.140000


    // ========================
    // 타입 변환 3 - 오버플로우
    // ========================

    char c = 125;
    c = c + 10;

    printf("%d\n", c);

    // 내 컴파일러가 signed char 인지 unsigned char 인지 확인
    printf("CHAR_MIN = %d\n", CHAR_MIN);
    printf("CHAR_MAX = %d\n", CHAR_MAX);



    return 0;
}