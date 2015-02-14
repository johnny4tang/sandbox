#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* test1(char* s)
{
	char* tmp = s;
	*(tmp+1) = s[1];
	*(tmp+2) = '\0';
	printf("%s\n",tmp);
	return tmp;	
}
void test2(char* p)
{
	printf("%s\n",p);
	*(p+2) = 'x';
	printf("%s\n",p);
}
void wronggetmemory(char* p, int num)
{
	p = (char*)malloc(num*sizeof(char));
}
char* getmem1(char* p, int num)
{
	p = (char*)malloc(num*sizeof(char));
	return p;
}
void getmem2(char** p, int num)
{
	*p = (char*)malloc(num*sizeof(char));
}
void getmem3(char* p, int num)
{
	//printf("%x\n",p);
	p = (char*)malloc(num*sizeof(char));
	//printf("%x\n",p);
}
int main()
{
	char str[] = "abcd";
	//test(str);
	//printf("%s\n",test(str));
	//test2(str);
	//printf("%s\n",str);
	char* ptr = "xyz";
	int i = 0;
	int* pi =&i;
	//wronggetmemory(ptr, 10);
	printf("%x\n",ptr);
	printf("%s\n",ptr);	
	getmem2(&ptr, 10);
	printf("%0x\n",ptr);
	printf("%s\n",ptr);	
	
	//strcpy(ptr,"hello");
	//ptr = getmem(ptr, 10);
	printf("%d\n",(int)sizeof(*ptr));
	return 1;
}
