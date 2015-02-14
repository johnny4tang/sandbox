#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void getMemory(char** p, int num)
{
	*p = (char*)malloc(num*sizeof(char));
}

int main()
{
	char* str1 = "abcd";
	//char* str2 = (char*)malloc(2*sizeof(char));
	char* str2 = NULL;
	getMemory(&str2,5);
	strcpy(str2,str1);
	printf("%s\n",str2);
	return 0;
}
