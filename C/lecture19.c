// 19강. 이중 반복문, 다중 반복문
#include <stdio.h>

int main(void){
    // 이중 반복문
    int i = 1;
    while(i<=3){
        printf("i: %d\n", i);
        int j = 1; // j값이 i while문 밖으로 나가면 의도와 다르게 돌아감
        while(j<=3){
            printf("j=%d) 안녕하세요\n", j);
            // 다중반복문
            int k = 1;
            while(k<=3){
                printf("k=%d\n",k);
                k++; // 증감연산자도 제 위치에 있어야 한다!
            }
            j++;
        }
        i++;
    }

    // for문으로 변환 -> while문보다 가독성이 더 좋음
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            printf("i=%d, j=%d) for문 연산중\n",i, j);
        }
    }
}