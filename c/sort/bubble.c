#include<stdio.h>

#define LEN 5

int arr[LEN] = {4,2,5,7,3};

void bubble(int arr[])
{
	int i,j,t;
	for(j=LEN-1;j>0;j--)
		for(i=0;i<j;i++)
		{
			if(arr[i]>arr[i+1])
			{
				t = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = t;
			}
		}
}
void printarr(int arr[])
{
	int i;
	for(i=0;i<LEN;i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\n");
}
int main()
{
	printarr(arr);
	bubble(arr);
	printarr(arr);
}
