
#include <stdio.h>
#define MAX 50

void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main(void)
{
    int numStudents;

    printf("학생 수를 입력하세요 (최대 %d명) : ", MAX);
    scanf("%d", &numStudents);

    if (numStudents < 1 || numStudents > MAX) {
        printf("입력 가능한 학생 수는 1~50명입니다.\n");
        return 1;
    }

    int grades[MAX];
    int *gradePointer = grades;

    for (int i = 0; i < numStudents; i++) {
        printf("%d번 학생의 최종 성적을 입력하세요 : ", i + 1);
        scanf("%d", gradePointer + i);
    }

    bubbleSort(gradePointer, numStudents);

    printf("\n정렬된 성적 : ");
    for (int i = 0; i < numStudents; i++) {
        printf("%d ", *(gradePointer + i));
    }

    printf("\n\n최고 성적 : %d\n",
           *(gradePointer + numStudents - 1));
    printf("최저 성적 : %d\n", *gradePointer);

    return 0;
}
