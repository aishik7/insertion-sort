#include <stdio.h>

void Insertionsort(int a[], int n)
{
    int i,j, small;
    for (i=1; i<n;i++)
    {
        small=a[i];
        for (j=i-1; j>=0 && small<a[j]; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=small;
    } printf("sorted %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}

int main()
{   int array[5]= {11,25,45,72,52};
    Insertionsort(array, 5);
}
