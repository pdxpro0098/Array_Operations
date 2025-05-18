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

int main()
{

    return 0;
}