#include <stdio.h>
#include <string.h>

#define ARRAY_LENGTH(arr) sizeof(arr) / sizeof(arr[0])

void printArray(int array[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", array[i]);
}

void reverseArray(int array[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        int temp = array[i];
        array[i] = array[len - 1 - i];
        array[len - 1 - i] = temp;
    }
}

void sortAscendingArray(int arr[], int len)
{
    for (int j = 0; j < len; j++)
    {
        for (int i = 0; i < len - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void sortDescendingArray(int arr[], int len)
{
    for (int j = 0; j < len; j++)
    {
        for (int i = 0; i < len - j - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int maxArray(int array[], int len)
{
    int max = array[0];
    for (int i = 0; i < len; i++)
        if (max < array[i])
            max = array[i];
    return max;
}

int minArray(int array[], int len)
{
    int min = array[0];
    for (int i = 0; i < len; i++)
        if (min > array[i])
            min = array[i];
    return min;
}

int main()
{

    return 0;
}