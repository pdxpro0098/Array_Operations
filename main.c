#include <stdio.h>
#include <string.h>

int main()
{
    int arr[15] = {1, 12, 33, 44, 51, 67, 7, 98, 9, 0, 33, 90, 45, 13, 74};

    int len = ARRAY_LENGTH(arr);
    printArray(arr, len);

    return 0;
}