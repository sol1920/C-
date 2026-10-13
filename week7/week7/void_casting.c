#include <stdio.h>

void main()
{
    int m_int = 15;
    double m_double= 3.1477;
    char m_char = 'M';
    void* mp;

    mp=&m_int;
    printf("m_double %d\n", *(int*)mp);

    mp = &m_int;
    printf("m_double %.1f\n", *(double*)mp);

    mp = &m_char;
    printf("m_char %c\n", *(char*)mp);
}