// Write a program to implement Quick Sort using Array.

#include <stdio.h>
#include <stdbool.h>

void Quick_Sort(int a[], int LB, int UB)
{
    bool Flag = true;
    if (LB < UB)
    {
        int i = LB;
        int j = UB + 1;
        int key = a[LB];

        while (Flag == true)
        {
            i++;
            while (a[i] < key)
            {
                i++;
            }
            j--;
            while (a[j] > key)
            {
                j--;
            }
            if (i < j)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else
            {
                Flag = false;
            }
        }
        int temp = a[LB];
        a[LB] = a[j];
        a[j] = temp;
        Quick_Sort(a, LB, j - 1);
        Quick_Sort(a, j + 1, UB);
    }
}

void display(int a[], int size)
{
    printf("Sorted Array..");
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
}
void main()
{
    int size;
    printf("Enter size of an array : ");
    scanf("%d", &size);
    int a[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int LB = 0, UB = size - 1;
    Quick_Sort(a, LB, UB);
    display(a, size);
}