#include<stdio.h>
#include<string.h>
#include"mystring.h"

int isSub(char* s1, char* s2)
{
	int i = 1;
	for(i=0;i<=strlen(s2)-strlen(s1);i++)
	{
		if(0 == strncmp(s1,s2+i,strlen(s1)))
		  return 0;
		else
		  continue;
	}
	return 1;
}
char* revert(char* s, char* tmp)
{
	int i;
	for(i=0;i<strlen(s);i++)
	{
		*(tmp+i) = *(s+(strlen(s)-1-i));
	}
	*(tmp+strlen(s)) = '\0';
	return tmp;
}

char* lstrep(char* s)
{
	char* tmp = s;
	char* head;
	char* lst;
	
}
int main()
{
	char str1[] = "abc";
	char str2[4];
	printf("%s\n",revert(str1,str2));
	//char str2[] = "abc1";
	//printf("%d\n",isSub("bce",str2));	
	//char* str3 = "abc";
	//char* str4 = "123";
	//char txt[5];
	//mystrcpy(txt,str3);
	//mystrcat(txt,str2);
	//printf("%s\n",txt);
	//printf("%d\n",mystrlen(str1));
	return 0;
}
