#include<stdio.h>
long permutation(int n,int r);
long combination(int n,int r);
long factorial(int num);
int main(void)
{
	int n,r;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter r:");
	scanf("%d",&r);
	printf("permutation=%1d\n",permutation(n,r));
	printf("combination=%1d",combination(n,r));
	return 0;
}
long permutation(int n, int r)
{
	return factorial (n)/factorial(n-r);
	
}
long combination(int n,int r)
{
	return permutation (n,r)/factorial (r);
}
long factorial (int num)
{
	long long fact=1;
	while (num>0)
	{
		fact*=num;
		num--;
	}
	return fact;
}
