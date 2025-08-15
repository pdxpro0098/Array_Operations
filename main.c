#include <stdio.h>
#include <string.h>

#define ARRAY_LENGTH(arr) sizeof(arr) / sizeof(arr[0])

void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
}

void reverse(int array[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int temp = array[i];
        array[i] = array[length - 1 - i];
        array[length - 1 - i] = temp;
    }
}

void sortAscending(int arr[], int length)
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

void sortDescending(int arr[], int length)
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

int maximum(int array[], int length)
{
    int max = array[0];
    for (int i = 0; i < length; i++)
        if (max < array[i])
            max = array[i];
    return max;
}

int secondMaximin(int array[], int length)
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

int minimum(int array[], int length)
{
    int min = array[0];
    for (int i = 0; i < length; i++)
        if (min > array[i])
            min = array[i];
    return min;
}

int secondMinimum(int array[], int length)
{
    int min1 = array[0];
    int min2 = 2147483648;
    for (int i = 0; i < length; i++)
    {
        if (min1 > array[i])
        {
            min2 = min1;
            min1 = array[i];
        }
        else if (array[i] < min2 && array[i] > min1)
        {
            min2 = array[i];
        }
    }
    return min2;
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

void sortOdd(int array[], int *length)
{
    int j = 0;
    for (int i = 0; i < (*length); i++)
    {
        if (array[i] % 2 != 0)
        {
            array[j++] = array[i];
        }
    }
    *length = j;
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

void sortEven(int array[], int *length)
{
    int j = 0;
    for (int i = 0; i < (*length); i++)
    {
        if (array[i] % 2 == 0)
        {
            array[j++] = array[i];
        }
    }
    *length = j;
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

static int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void sortPrime(int array[], int *length)
{
    int j = 0;
    for (int i = 0; i < (*length); i++)
    {
        if (isPrime(array[i]))
        {
            array[j++] = array[i];
        }
    }
    *length = j;
}

int nthMax(int arr[], int length, int nthTerm)
{
    sortDescending(arr, length);
    if (nthTerm > length)
    {
        printf("array index out of bund ");
        return -1;
    }
    return arr[nthTerm - 1];
};

int deleteElement(int arr[], int element, int *length)
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
    return 1;
}

int insertElement(int arr[], int *size, int capacity, int element, int index)
{
    if (*size >= capacity)
    {
        printf("Not enough space to insert element\n");
        return 0;
    }

    if (index < 0 || index > *size)
    {
        printf("Invalid index\n");
        return 0;
    }

    int i = *size;
    for (i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = element;
    (*size)++;
    return 1;
}

int pushBack(int arr[], int size, int capacity, int element)
{

    if (size > capacity)
    {
        printf("Not enough space to insert element");
        return 0;
    }
    arr[size] = element;
    return 1;
}

int popBack(int arr[], int size)
{
    int lastElement;
    for (int i = size; i > 0; i--)
    {
        if (arr[i] != 0)
        {
            lastElement = arr[i - 1];
            break;
        }
    }
    deleteElement(arr, lastElement, &size);
    return 1;
}
