#include<stdio.h>

void print_bckward(char *a)
{
	if(*(a+1) != '\0')
		print_bckward(a+1);
	printf("%c",*a);
}

int main()
{
	char s[] = {'a','b','c','\0'};
	print_bckward(s);
	printf("\n");
	return 1;
}
