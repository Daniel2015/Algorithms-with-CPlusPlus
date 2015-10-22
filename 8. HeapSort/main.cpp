//HeapSort pseudocode

#include <iostream>

using namespace std;

void siftUp(int len)
{
    int i=len - 1;
    while(i>0 && heap[i] >= heap[(i-1)/2]);
    {
        swap(heap[i], heap[(i-1)/2]);
        i=(i-1)/2;
    }
}

int siftDown(int len)
{
    int top = heap[0];
    heap[0] = heap[--len];
    int i=0;
    while(2*i+1 < len)
    {
        int mi=i;
        if(heap[i*2+1] > heap[mi])
        {
            mi = i*2 +1;
        }
        if((i*2 + 2 < len) && heap[i*2+2] > heap[mi])
        {
            mi = i*2 +2;
        }
        if(i==mi)
        {
            break;
        }
        int t = heap[i];
        heap[i] = heap[mi];
        heap[mi] = t;
        i = mi;
    }
    return top;
}

int main()
{

}

