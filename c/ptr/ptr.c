#include<stdio.h>

void fun(char *p)
{
	p[0] = 's';
	//printf("%c\n",c);
}

int main(){
	//int a[5] = {1,2,3,4,5};
	//int *ptr = (a+1);
	////printf("%d,%d,%d\n",*(a+1),*(ptr-1),*ptr);
	//char a[5] = {'a','b','c','d'};
	//char (*p3)[5] = &a;
	//char (*p4)[5] = a;
	//printf("%d\n",*(p4+1));
	char p2[] = "abcdefg";
	fun(p2);
	//p2[0] = 'x';
	printf("%s\n",p2);
	return 0;
}
