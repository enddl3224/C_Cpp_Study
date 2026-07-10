// 9강. 자료형, 데이터 타입이 존재하는 이유
// [내용정리]
// 데이터 타입: 정수형, char, short, int, long long
// 실수형: float, double
// char = 1byte
// int = 4byte
// unsigned int = 4byte -> unsigned 선언시 음수영역은 사용하지 않겠다.
// long long int = 8byte
// float = 4byte
// double = 8byte
#include <stdio.h>

int main(void){
    int a = 2200000000;
    printf("%d\n",a);
    // 21억은 되지만, 22억은 안됨 -> int 범위를 벗어남
    // 따라서 22억을 표현하고 싶다면 long long int로 8byte 사용
    long long a2 = 2200000000;
    printf("%lld\n",a2); //서식지정자도 lld로 변경해야함!

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(a2));
    // sizeof()함수를 사용하면 몇 바이트인지 나옴

    // C언어는 자료형도 다양하지만, 다양한 자료형에 따라 서식지정자도 맞춰야한다!
    return 0;
}
