//program to display the 2-D array elements
#include <stdio.h>
int read()
{
	int arr[50][50], i, j, m, n;
	printf("Enter the 2-D array size (m * n). \n");
	scanf("%d %d" , &m, &n);
	printf("Enter elements of the array. \n");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);		
	}
	display(arr, m, n);
}
int display(int arr[50][50], int m, int n)
{
	int i, j;
	printf("The elements of the array. \n");
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			printf("%d\n", arr[i][j]);		
	}
}
void main()
{
	read();
}
