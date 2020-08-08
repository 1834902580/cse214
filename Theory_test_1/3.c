#include<stdio.h>
int main ()
{
    int arr[100]= {1,2,3,4,5,6,7,8,9,10};
    int i, j, X, flag=0, arr_size=10;
        scanf("%d",&X);
    for( i = 0; i < arr_size; i++)
    {
        printf("%d ",arr[i]);
    }
        printf("\n");
    for( j = 0; j < arr_size; j++)
    {
        if(X==arr[j])
        {
            for( i = X-1; i <= arr_size; i++)
            {
                arr[i] = arr[i+1];
            }
            flag++;
        }
    }
    arr_size--;

    if(flag!=1)
    {
        printf("\n Not Found\n");
    }

    else
        {
            for( i = 0; i < arr_size; i++)
            {
                printf("%d ",arr[i]);
            }
        }

    return 0;
}
