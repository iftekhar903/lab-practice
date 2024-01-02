#include<stdio.h>
int main()
{
    int n=6;
    int  array[6]= {2,3,4,15,7,5};
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            int first =array[j];
            int second=array[j+1];
            if(second<first)
            {
                int temp;
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

            }
        }
    }

    printf("the array is : ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;

}

