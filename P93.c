// Write a program to implement Merge Sort using Array.

#include <stdio.h>
#include <math.h>

void display(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

void merge(int a[],int low, int mid, int high)
{
    int h, i, j, k;
    int b[high - low + 1];
    h = low, j = mid + 1,i=0;

    while (h <= mid && j <= high)
    {
        if (a[h] <= a[j])
        {
            b[i] = a[h];
            h++;
        }
        else
        {
            b[i] = a[j];
            j++;
        }
        i++;
    }

    if (h > mid)
    {
        for (k = j; k <= high; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    else
    {
        for (k = h; k <= mid; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    for (k = low; k <= high; k++)
    {
        a[k] = b[k-low];
    }
    
}


void mergeSort(int a[],int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a,low, mid);
        mergeSort(a,mid + 1, high);
        merge(a,low, mid, high);
    }
}

void main()
{
    int size;
    printf("enter size: ");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter element: ");
        scanf("%d", &a[i]);
    }

    int low = 0, high = size - 1;
    mergeSort(a,low, high);
    display(a,size); 
}