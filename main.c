#include <stdio.h>
#include <string.h>

#define ARRAY_LENGTH(arr) sizeof(arr) / sizeof(arr[0])

void printArray(int array[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", array[i]);
}

int main()
{
    int arr[15] = {1, 12, 33, 44, 51, 67, 7, 98, 9, 0, 33, 90, 45, 13, 74};

    return 0;
}