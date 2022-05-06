//program to add substract the array elements and display using the function
#include <stdio.h>
void read()
{
	int arr1[2][2], arr2[2][2], i, j;
	printf("Enter numbers for array 1: \n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
			scanf("%d", &arr1[i][j]);	
	}
	printf("Enter numbers for array 2: \n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
			scanf("%d", &arr2[i][j]);	
	}
	add(arr1, arr2);
	sub(arr1, arr2);
}
int add(int arr1[2][2], int arr2[2][2])
{
	int i, j;
	printf("Addition \n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
			printf("%d + %d = %d \n", arr1[i][j], arr2[i][j], arr1[i][j] + arr2[i][j]);	
	}
}
int sub(int arr1[2][2], int arr2[2][2])
{
	int i, j;
	printf("Substraction \n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
			printf("%d - %d = %d \n", arr1[i][j], arr2[i][j], arr1[i][j] - arr2[i][j]);	
	}
}
void main()
{
	read();
}
