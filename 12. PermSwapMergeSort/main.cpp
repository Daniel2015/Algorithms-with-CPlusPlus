#include <iostream>
#include <stdio.h>

using namespace std;

int N;
long long counter = 0;
int numbersToSort[1<<21];
void merge(int start, int mid, int end)
{
    int b[end-start];
	int h,i,j,k;
	h=start;
	i=0;
	j=mid+1;

    while((h<=mid)&&(j<=end))
	{
		if(numbersToSort[h]<=numbersToSort[j])
		{
			b[i]=numbersToSort[h];
			h++;

		}
		else
		{
			b[i]=numbersToSort[j];
			j++;
            counter = counter + (mid - h +1);
		}
		i++;
	}
    if(h>mid)
	{
		for(k=j;k<=end;k++)
		{
			b[i]=numbersToSort[k];
			i++;
		}
	}
	else
	{
		for(k=h;k<=mid;k++)
		{
			b[i]=numbersToSort[k];
			i++;
		}
	}

    for(k=0;k<=end-start;k++)
	{
		numbersToSort[k+start]=b[k];
	}
}

void sort(int start, int end)
{
    if(start < end)
    {
        int mid = (start + end)/2;
        sort(start, mid);
        sort(mid + 1, end);
        merge(start, mid, end);
    }
}

int main()
{
    scanf("%d", &N);
    for(int i=0; i < N ;i++){
       scanf("%d", &numbersToSort[i]);
    }
    sort(0, N-1);
    printf("%lld", counter);
    return 0;
}
