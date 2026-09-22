#include <stdio.h>
#include <stdarg.h>

int sum(int num,... ) {
    va_list args;
    int total =0;

    va_start(args, num); 

    for (int i=0; i < num; i++) {
        total +=va_arg(args, int); 

    }
    va_end(args);

    return total;
}

int main() {
    printf("매개변수 3, 2+3+4=%d\n", sum(3, 2,3,4));
    printf("매개변수 2, 5+6=%d\n", sum(2, 5,6));
    printf("매개변수 10, 1+2+3+4+5+6+7+8+9+10-%d\n", sum(10, 1,2,3,4,5,6,7,8,9,10));

    return 0;
}
