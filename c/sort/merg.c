#include<stdio.h>

void sort(int start, int end)
{
	int mid;
	if(start < end)
	{	
		mid = (start + end)/2;
		sort(start, mid);
		sort(mid+1;end);
		merge(start, mid, end);
	}
}

