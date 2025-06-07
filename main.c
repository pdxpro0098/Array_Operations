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

int secondMaxArray(int array[], int len)
{
    int max1 = array[0];
    int max2 = -2147483648;
    for (int i = 0; i < len; i++)
    {
        if (max1 < array[i])
        {
            max2 = max1;
            max1 = array[i];
        }
        else if (array[i] > max2 && array[i] < max1)
        {
            max2 = array[i];
        }
    }
    return max2;
}

int minArray(int array[], int len)
{
    int min = array[0];
    for (int i = 0; i < len; i++)
        if (min > array[i])
            min = array[i];
    return min;
}

int secondMinArray(int array[], int len)
{
    int max1 = array[0];
    int max2 = 2147483648;
    for (int i = 0; i < len; i++)
    {
        if (max1 > array[i])
        {
            max2 = max1;
            max1 = array[i];
        }
        else if (array[i] < max2 && array[i] > max1)
        {
            max2 = array[i];
        }
    }
    return max2;
}

int sumArray(int array[], int len)
{
    int arraySum = 0;
    for (int i = 0; i < len; i++)
        arraySum += array[i];
    return arraySum;
}

int productArray(int array[], int len)
{
    int arrayProduct = 1;
    for (int i = 0; i < len; i++)
        arrayProduct *= array[i];
    return arrayProduct;
}

void emptyArray(int array[], int len)
{
    memset(array, 0, len * sizeof(int));
}


void deleteElementArray(int arr[], int element, int *len)
{
    for (int i = 0; i < *(len); i++)
    {
        if (arr[i] == element)
        {
            for (int j = i; j < *(len)-1; j++)
            {
                arr[j] = arr[j + 1];
            }
            (*len)--;
            break;
        }
    }
}

int main()
{

    return 0;
}