#include<stdio.h>
int sum(int n)
{
    if(n==1)
    {
        return 1;

    }
    return sum(n-1)+n;

}
int main()
{
    printf("%d\n",sum(8));
    return 0;
}
