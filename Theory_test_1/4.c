#include <stdio.h>

int main()
    {

    int a[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int size = 10;
    int flag = 0;

    scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(a[i]==X)
            {

            printf("Index %d",i);
            flag

            }

    }
        if(flag!=1)
            printf("-1");

        return 0;

    }
