#include <stdio.h>
#include <conio.h>
int main()
{
	int n,i,t=1;
	printf("\n Enter a number : ");
	scanf("%d",&n);
	printf("\n Table of %d is : ",n);
	for(i=1;i<=10;i++)
	{
		t=n*i;
		printf("\n %d x %d = %d",n,i,t);
	}
	return 0;
	getch();
}
