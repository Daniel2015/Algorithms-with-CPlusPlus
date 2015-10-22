//QuickSort pseudocode

#include <iostream>

using namespace std;

void QuickSort(start, end)
{
    if(end - start > 1)
    {
        pivot = a[start];
        i = start;
        j = end - 1;
        while(i < j)
        {
            while(a[i] < pivot) ++i;
            while(a[j] > pivot) --j;
            if(i < j)
            {
                swap(a[i], a[j]);
                i++;
                j--;
            }
        }
        QuickSort(start, j);
        QuickSort(j, end);
    }
    else{
        break;
    }
}

int main()
{
    return 0;
}
