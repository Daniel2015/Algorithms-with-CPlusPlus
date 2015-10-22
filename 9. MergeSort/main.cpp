//MergeSort pseudocode

#include <iostream>

using namespace std;

void sort(int start, int end)
{
    if(start + 1 < end)
    {
        int mid = (start + end -1)/2;
        sort(start, mid);
        sort(mid, end);
        merge(start, mid, end);
    }
}

void merge(int start, int mid, int end)
{
    int i = start;
    int j = mid;
    while(i < mid || j < end)
    {
        if(i < mid && (j >= end || a[i] <a[j]))
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
        memcpy(a[start], b, size(irt)*(end-start));
    }
}

int main()
{
    return 0;
}
