/*
작성자 : 김지호
학번 : 20195141
enum 열거형은 표준 정수에 기반을 둔 사용자 정의 형식이다. 각 정수는 열거 상수이고 표시는 기호로 표시한다. 이를 연습하는 프로그램
실습 1번
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    int channel = 0;
    enum TV {
        fox = 2, nbc = 4, cbs = 5,
        abc = 11, hbo = 15, show = 17,
        max = 31, espn = 39, cnn = 51
    };
    //ex) fox => 정수, 값은 2를 가지고있는 기호이다. 이때 2는 상수이고 변경 불가능하다.
    printf("Here are my favorite cable stations: \n");
    printf(" ABC: \t%2d\n", abc);
    printf(" CBS: \t%2d\n", cbs);
    printf(" CNN: \t%2d\n", cnn);
    printf(" ESPN: \t%2d\n", espn);
    printf(" FOX: \t%2d\n", fox);
    printf(" HBO: \t%2d\n", hbo);
    printf(" MAX: \t%2d\n", max);
    printf(" NBC: \t%2d\n", nbc);
    printf(" SHOW: \t%2d\n", show);
    printf(" Select channel : ");
    //각 기호들은 상수이기때문에 %d로 출력한다.
    scanf_s("%d", &channel);

    switch (channel) {
        case abc: printf("ABC channel"); break;
        case cbs: printf("CBS channel"); break;
        case cnn: printf("CNN channel"); break;
        case espn: printf("ESPN channel"); break;
        case fox: printf("FOX channel"); break;
        case hbo: printf("HBO channel"); break;
        case max: printf("MAX channel"); break;
        case nbc: printf("NBC channel"); break;
        case show: printf("show channel"); break;
        default: printf("no service");
    }//각 기호는 문자가 아닌 상수이다.


    return 0;
}