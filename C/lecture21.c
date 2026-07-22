// 21강. 개념, 함수
// 함수란? => 매개변수, 리턴 
// 함수: 코드의 중복 없이 길이를 줄일 수 있는 방법
// 함수의 특징
// 1. 함수는 정의되어야만 사용 가능하다.
// 2. 함수를 정의했으면 실행해야 한다.
// 3. 함수 선언시 함수명 중복 선언은 불가.
#include <stdio.h>

// 함수는 main밖에 작성해야함
void print_dan(){ // 함수를 실행한 게 아니라 정의한 것이다!
    int dan = 2;
    for(int i=2; i<=9; i++){
        printf("%d X %d = %d\n", dan, i, dan*i);
    }
}

int main(void){
    print_dan(); // 함수 실행하는 곳
    print_dan();
    print_dan();
    // 중복 발생!
    // 따라서 함수 반복 자체를 반복문에 넣어 사용하면 된다.
    for(int i=0; i<10; i++){
        print_dan();
    }
}