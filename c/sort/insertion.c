#include<stdio.h>

#define LEN 5

int a[LEN] = {10, 5, 2, 4, 7};
void printarr(int a[], int n)
{
	int i = 0;
	for(i=0;i<n;i++)
		printf("%d, ",a[i]);
	printf("\n");
}
int insertion(int a[])
{
	int i = 0,key=0,j=0,k=0;
	for(i=1;i<LEN;++i)
	{	
		printarr(a,LEN);
		key = a[i];
		j = i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = key;
	}
}

int main()
{
	insertion(a);
	printarr(a,LEN);
	return 1;
}
