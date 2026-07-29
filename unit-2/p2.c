#include<stdio.h>
#include<conio.h>

int factorial(int n);
void main()
{
	int n,z;
	clrscr();
	printf("\n Enter Value : ");
	scanf("%d",&n);

int factorial(int n)
{
	int f;
	if(n==1)
		return 1;
	else
		f=n*factorial(n-1);
	return f;
}
