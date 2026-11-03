#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float gradePoints;
};

int main() {
    struct Student student1, student2;
    strcpy(student1.name,"Moon");
    student1.id = 20240001;
    student1.gradePoints = 95.5;
    strcpy(student2.name,"Yun");
    student2.id = 20240002;
    student2.gradePoints = 88.5;

    printf("학생 1의 정보:\n");
    printf("이름: %s\n",student1.name);
    printf("학생 1의 정보:\n");
    printf("0:%s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("점수: %.2f\n\n", student1.gradePoints);
    printf("학생 2의 정보:\n");
    printf("0|:%s\n", student2.name);
    printf("ID: %d\n", student2.id);
    printf("점수: %.2f\n", student2.gradePoints);

    
    
}