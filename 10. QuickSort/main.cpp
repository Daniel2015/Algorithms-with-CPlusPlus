#include <iostream>
#include <stdio.h>

using namespace std;

int N;
unsigned int numbersToSort[1<<20];
unsigned int FindMedian(unsigned int, unsigned int, unsigned int);

void QuickSort(unsigned int arr[], int startIndex, int endIndex)
{
    int i = startIndex;
    int j = endIndex;
    unsigned int tmp;
    unsigned int pivot = FindMedian(arr[startIndex], arr[N/2], arr[endIndex]);
    while (i <= j)
    {
        while (arr[i] < pivot)
              i++;
        while (arr[j] > pivot)
              j--;
        if (i <= j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }
    if (startIndex < j)
    {
        QuickSort(arr, startIndex, j);
    }

    if (i < endIndex)
    {
        QuickSort(arr, i, endIndex);
    }
}

unsigned int FindMedian(unsigned int num1, unsigned int num2, unsigned int num3)
{
    if ((num1 - num2) * (num3 - num1) >= 0)
    {
        return num1;
    }
    else if ((num2 - num1) * (num3 - num2) >= 0)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    scanf("%d", &N);
    for(int i=0; i < N ;i++){
       scanf("%u", &numbersToSort[i]);
    }
    QuickSort(numbersToSort, 0, N-1);
    for(int i=0; i< N; i++){
            printf(" %u", numbersToSort[i]);
    }
    return 0;
}
