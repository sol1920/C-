#include <stdio.h>

int main()
{
    int cnt[7] = {0};
    int n;

    for(int i = 0; i < 10; i++) 
    {
        scanf("%d", &n);
        cnt[n]++;
    }

    for(int i = 1; i <= 6; i++) 
    {
        printf("%d : %d\n", i, cnt[i]);
    }
}