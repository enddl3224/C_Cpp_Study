// 6강. 변수 a와 b의 값을 교체 (swap)
#include <stdio.h>

int main(void){
    int a = 20;
    int b = 40;

    printf("초기 a와 b값\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("==문제시작==\n");
    // [알고리즘]
    // 1. 비어있는 temp에 a를 넣는다.
    // 2. a에 b를 넣는다.
    // 3. b에 temp를 넣는다.
    // 4. 끝. a와 b의 위치가 변화한다.

    // 알고리즘 구현 시작
    int temp;

    temp = a;
    a = b;
    b = a;
    // 알고리즘 구현 끝

    printf("변경 후 a와 b값\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
