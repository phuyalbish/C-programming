//program to read and diaplay the largest and smallest
#include <stdio.h>
void read()
{
	int arr[5], i;
	printf("Enter 5 numbers: ");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	largest(arr);
	smallest(arr);
}
int largest(int larr[5])
{
	int i, large = 0;
	for(i = 0; i < 5; i++)
	{
		if(larr[i] > large)
			large = larr[i];
	}
	printf("Largest Number: %d\n", large);
}
int smallest(int sarr[5])
{
	int i, small = sarr[0];
	for(i = 1; i < 5; i++)
	{
		if(sarr[i] < small)
			small = sarr[i];
	}
	printf("Smallest Number: %d", small);
}
void main()
{
	read();
}

