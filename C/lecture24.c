// 24강. 매개변수, 복수개의 매개변수
#include <stdio.h>
void sol1_1(int a){
    printf("sol1_1() 함수의 매개변수 a: %d\n", a);
}

void sol1_2(float a){
    printf("sol1_2() 함수의 매개변수 a: %.2f\n", a);
}

void sol2_1(int a, char b, float c){
    printf("sol2_1() 함수의 매개변수 a, b, c: %d, %c, %.2f\n", a, b, c);
}

void sol2_2(float a, int b){
    printf("sol2_2() 함수의 매개변수 a, b, c: %.2f, %d\n", a, b);
}

int main(void){
    sol1_1(10);
    sol1_2(5.5);

    sol2_1(10, 'k', 23.5);
    sol2_2(5.5, 11);
}