#include <stdio.h>
#include <string.h>

#define ARRAY_LENGTH(arr) sizeof(arr) / sizeof(arr[0])

void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
}

void reverseArray(int array[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;
    }
}

void sortAscendingArray(int arr[], int length)
{
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length - j - 1; i++)
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

void sortDescendingArray(int arr[], int length)
{
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length - j - 1; i++)
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

void emptyArray(int array[], int length)
{
    memset(array, 0, length * sizeof(int));
}

void deleteElementArray(int arr[], int element, int *length)
{
    for (int i = 0; i < *(length); i++)
    {
        if (arr[i] == element)
        {
            for (int j = i; j < *(length)-1; j++)
            {
                arr[j] = arr[j + 1];
            }
            (*length)--;
            break;
        }
    }
}

int maxArray(int array[], int length)
{
    int max = array[0];
    for (int i = 0; i < length; i++)
        if (max < array[i])
            max = array[i];
    return max;
}

int secondMaxArray(int array[], int length)
{
    int max1 = array[0];
    int max2 = -2147483648;
    for (int i = 0; i < length; i++)
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

int minArray(int array[], int length)
{
    int min = array[0];
    for (int i = 0; i < length; i++)
        if (min > array[i])
            min = array[i];
    return min;
}

int secondMinArray(int array[], int length)
{
    int max1 = array[0];
    int max2 = 2147483648;
    for (int i = 0; i < length; i++)
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

int sumArray(int array[], int length)
{
    int arraySum = 0;
    for (int i = 0; i < length; i++)
        arraySum += array[i];
    return arraySum;
}

int productArray(int array[], int length)
{
    int arrayProduct = 1;
    for (int i = 0; i < length; i++)
        arrayProduct *= array[i];
    return arrayProduct;
}

int countOdd(int arr[], int length)
{
    int oddCount = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddCount++;
        }
    }
    return oddCount;
}

int countEven(int arr[], int length)
{
    int evenCount = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
    }
    return evenCount;
}

int countPrime(int arr[], int length)
{
    int nonPrimeCount = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < 2)
        {
            nonPrimeCount++;
            continue;
        }

        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                nonPrimeCount++;
                break;
            }
        }
    }
    return length - nonPrimeCount;
}

int nthMax(int arr[], int length, int nthTerm)
{
    sortDescendingArray(arr, length);
    if (nthTerm > length)
    {
        printf("array index out of bund ");
        return -1;
    }
    return arr[nthTerm - 1];
};

int main()
{

    return 0;
}