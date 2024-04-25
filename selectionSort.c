#include <stdio.h>

int main()
{
    int arr[] = {5, 9, 7, 6, 4, 0, 2, 3, 8, 1};
    int length = 10;

    for (int i = 0; i < length - 1; i++)
    {

        int minPos = i;
        for (int j = i + 1; j < length; j++)
            if (arr[j] > arr[minPos])
                minPos = j;
        if (minPos != i)
        {
            int temp = arr[i];
            arr[i] = arr[minPos];
            arr[minPos] = temp;
        }
    }

    for (int i = 0; i < length; i++)
        printf("arr[%d] = %d\n", i, arr[i]);

    return 0;
}