//Q.5 Write a Program to print the below pattern using nested for loop.
//A
//B 1 
//C 2 D
//E 3 F 4
//G 5 H 6 I.

#include<stdio.h>

void main()
{
	int i;
	int j;
	int k=1;
	char c='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%d ",k);
				k++;
			}
			else
			{
				printf("%c ",c);
				c++;
			}
		}
		printf("\n");
	}
}

//output:- 
//A
//B 1
//C 2 D
//E 3 F 4
//G 5 H 6 I
