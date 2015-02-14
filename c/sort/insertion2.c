#include<stdio.h>

void printarr(int a[], int num)
{
	int i;
	for(i=0;i<num;i++)
		printf("%d, ",a[i]);
	printf("\n");
}	
void insertion(int a[], int num)
{
	int i, j, key;
	for(i=1;i<num;i++)
	{
		key = a[i];
		j = i-1;
		while((j >= 0) &&(a[j] > key))
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	printarr(a,5);
	}
}
int main()
{
	int arr[] = {4,5,3,6,2};
	insertion(arr,5);
	printarr(arr,5);
	return 1;	
}


