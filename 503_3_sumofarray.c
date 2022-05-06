//program to find the sum of the array numbers
#include <stdio.h>
void read()
{
	int i, n, arr1[50], arr2[50];
	printf("Enter nth term: ");
	scanf("%d", &n);
	printf("Enter numbers for Array 1: ");
	for(i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	printf("Enter numbers for Array 2: ");
	for(i = 0; i < n; i++)
		scanf("%d", &arr2[i]);
	sum(arr1, arr2, n);
}
int sum(int array1[50], int array2[50], int n1)
{
	int arrSum[50], i;
	for(i = 0; i < n1; i++)
		arrSum[i] = array1[i] + array2[i];
	display(array1, array2, arrSum, n1);
}
int display(int arr1[50], int arr2[50], int sum[50], int n2)
{
	int i;
	printf("Sum: \n");
	for(i = 0; i < n2; i++)
		printf("%d + %d = %d \n",arr1[i], arr2[i], sum[i]);
}
void main()
{
	read();
}
