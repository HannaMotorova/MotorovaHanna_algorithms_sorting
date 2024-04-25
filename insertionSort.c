#include <stdio.h>

void insertionSort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {8, 4, 9, 5, 7, 6, 3, 2};
    insertionSort(arr, 8);
    for (int i = 0; i < 8; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    return 0;