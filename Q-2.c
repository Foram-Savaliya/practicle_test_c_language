//Q.2 WAP to find a cube of all elements from a given 2D array.

void main()
{
	int n;
	int m;
	printf("Enter size of row:");
	scanf("%d",&n);
	printf("Enter size of column:");
	scanf("%d",&m);
	
	int a[n][m];
	int i,j;
	int cube;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d]:- ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("cube of all element is following here :-\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cube = a[i][j] * a[i][j] * a[i][j];
			printf("a[%d][%d] = %d \n",i,j,cube);
		}
		
		printf("\n");
	}
}

//output:-
//Enter size of row:2
//Enter size of column:2
//a[0][0]:- 1
//a[0][1]:- 2
//
//a[1][0]:- 3
//a[1][1]:- 4
//
//cube of all element is following here :-
//a[0][0] = 1
//a[0][1] = 8
//
//a[1][0] = 27
//a[1][1] = 64

