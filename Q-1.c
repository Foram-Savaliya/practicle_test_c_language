//Q.1 WAP to print all odd numbers from a given range using UDF.

#include<stdio.h>
int oddno(int x)
{
	int i;
	for(i=1;i<=x;i++)
	{
		if(i%2 != 0)
		{
			printf("%d ",i);
		}
	}
	return x;
}
void main()
{
	int n;
	printf("Enter any number for range:");
	scanf("%d",&n);
	oddno(n);
}

//output:-
//Enter any number for range:9
//1 3 5 7 9
