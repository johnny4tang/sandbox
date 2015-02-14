#include<stdio.h>

int factorial_normalRecursion(int n)
{
	if(n == 0)
		return 1;
	return factorial_normalRecursion(n-1)*n;
}
int factorial_tailRecursion(int i, int n)
{
	if(i == 0)
		return n;
	return factorial_tailRecursion(i-1,i*n);	
}
int fb(int n)
{
	if((n == 0)||(n == 1))
		return n;
	printf("%d, ",n);
	return(fb(n-1)+fb(n-2));
	
}
int gcd(int a, int b)
{
	if(a%b == 0)
		return b;
	else
		return gcd(b, a%b);
}
int empty()
{
	emptyson();	
}
int emptyson()
{
	return 1;
}
int main()
{
	//ff(6);
	printf("%d\n",gcd(12,6));
	//printf("%d\n",factorial_tailRecursion(4,1));
}
