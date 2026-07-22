// 25강. 함수 리턴
#include <stdio.h>
int plus(int a, int b){
    int c = a + b;
    return c; // 이 반환값(함수실행결과)과 함수의 타입이 일치해야함
    // return을 만나면 함수가 종료되며 밑의 구문들은 실행되지 않는다.
}

int is_adult(int age){
    if(age >= 20){
        return 1; // 참
    } else {
        return 0; // 거짓
    }
}

int main(void){
    int rs = plus(10, 20) + plus(30, 40);
    printf("%d\n",rs);

    printf("[20 is adult]\nthis age is %d. (TRUE=1/ FALUSE=0)\n",is_adult(30));
    printf("this age is %d. (TRUE=1/ FALUSE=0)\n",is_adult(15));
}