#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address {
    char street[100]; //거리 이름 저장
    char city[50];
    char state[50];
    int zipCode;
};
struct Employee {
    char name[50];
    struct Address*address;
};

int main() {
    struct Employee emp;
    struct Address addr;
    emp.address=&addr; //emp가 addr의 데이터를 참조
    //fgets() 함수를 통해 사용자로부터 정보를 입력받음
    printf("직원의 이름을 입력하세요: ");
    fgets(emp.name,50,stdin);
    printf("거리의 이름을 입력하세요: ");
    fgets(emp.address->street, 100, stdin);

printf("도시 이름을 입력하세요: ");
fgets(emp.address->city, 50, stdin);

printf("구 이름을 입력하세요: ");
fgets(emp.address->state, 50, stdin);

printf("우편번호를 입력하세요: ");
scanf("%d", &emp.address->zipCode);

printf("\n입력된 직원 정보:\n");
printf("이름: %s", emp.name);
printf("주소: %s, %s, %s, %d\n", emp.address->street, emp.address->city,
                            emp.address->state, emp.address->zipCode);
return 0;
}