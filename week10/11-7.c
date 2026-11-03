#include <stdio.h>
#include <ctype.h>  // 문자 처리 함수(isalpha, isupper 등)를 쓰기 위한 헤더 파일
int main(){
    char ch = 'M';
    printf("문자: %c\n",ch);

    printf("알파벳 여부: %s\n",isalpha(ch) ? "예" : "아니요"); // isalpha: 알파벳(A~Z, a~z)인가?
    printf("대문자 여부: %s\n",isupper(ch) ? "예" : "아니요");// isupper: 알파벳 대문자(A~Z)인가?
    printf("소문자 여부: %s\n",islower(ch) ? "예" : "아니요");// islower: 알파벳 소문자(a~z)인가?
    printf("숫자 여부: %s\n",isdigit(ch) ? "예" : "아니요");   // isdigit: 숫자 문자('0'~'9')인가?
    printf("알파벳 또는 숫자 여부: %s\n",isalnum(ch) ? "예" : "아니요"); // isalnum: 알파벳 또는 숫자인가? (alpha + number)
    printf("16진수 숫자 여부: %s\n",isxdigit(ch) ? "예" : "아니요");  // isxdigit: 16진수 숫자(0~9, A~F, a~f)인가?
    printf("구두점 문자 여부: %s\n",ispunct(ch) ? "예" : "아니요");    // ispunct: 구두점(! , . ? 등 출력 가능한 특수 문자)인가?
    printf("인쇄 가능 문자 여부: %s\n",isprint(ch) ? "예" : "아니요");  // isprint: 화면에 출력 가능한 문자(공백 포함)인가?
    printf("제어 문자 여부: %s\n",iscntrl(ch) ? "예" : "아니요");      // iscntrl: 제어 문자('\n', '\t' 등 출력되지 않는 문자)인가?
    printf("아스키 문자 여부: %s\n",isascii(ch) ? "예" : "아니요");   // isascii: 아스키코드 범위(0~127)의 문자인가?

    return 0;

}