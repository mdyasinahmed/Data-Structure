#include <stdio.h>
#define s 100

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a[s], i, j, n, pivot, target;
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    pivot = a[n-1];
    //printf("%d", pivot);

    for(i=0;i<n;i++)
    {
        if(a[i] > pivot)
        {
            target = a[i];
        }
        for(j=i+1;j<n-1;j++)
        {
            if(a[j] < pivot)
            {
                swap(target,a[j]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }



    return 0;
}
