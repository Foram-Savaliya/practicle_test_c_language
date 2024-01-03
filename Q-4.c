//Q.4 WAP to print all odd numbers from a given 1D array using Pointer.

#include<stdio.h>

void main()
{
	int n;
	int *ptr;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2 != 0)
		{
			printf("%u => %d\n",*ptr+i,a[i]);
		}
	}
}

//output :-
//Enter the size of array : 10
//a[0] :- 1
//a[1] :- 2
//a[2] :- 3
//a[3] :- 4
//a[4] :- 5
//a[5] :- 6
//a[6] :- 7
//a[7] :- 8
//a[8] :- 9
//a[9] :- 10
//10556256 => 1
//10556258 => 3
//10556260 => 5
//10556262 => 7
//10556264 => 9
