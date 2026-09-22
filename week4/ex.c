#include<stdio.h>>

void printNUM(int n)
{
    if(n == 0){
        return;
    }
    printNUM(n-1);
    printf("%d\n",n);

}
int main(void)
{
    int n;
    scanf("%d",&n);
    printNUM(n);
    return 0;
}