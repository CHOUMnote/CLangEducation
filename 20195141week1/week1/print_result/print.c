/* 실습 2 :  print_result 프로젝트
   소스파일명 :  print.c
   작성일 : 2022 .  2 . 28
   작성자 : 김지호
   최종수정일 : 2022 .  2 . 28
   프로그램 설명 : C의 기본 구성에 대한 실습으로
                   간단한 산술 계산 후 출력을 하는 프로그램
*/
# include <stdio.h>

int main(int argc, char* argv[])
{
    int result;

    result = 100 - 50;
    printf(" %d\n", result);
    return 0;
}