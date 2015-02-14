#include<stdio.h>
union Data
{
	char c;
	int i;
};
main()
{
	union Data d;
	d.i=0x0001;
	printf("%x\n",d.c);
	return 0;
}

