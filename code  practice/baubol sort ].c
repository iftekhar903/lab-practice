#include<stdio.h>
int main()
{
    int num[5]={4,2,36,1,7},i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }

    }
    for(i=0;i<6;i++)
    {
        printf("%d\t"a[i]);
    }
}
