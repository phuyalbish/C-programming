//program to read the age of students and display the 2nd lowest age
#include <stdio.h>
void read()
{
	int arr[50], n, i;
	printf("Enter the number of the students: ");	
	scanf("%d", &n);
	printf("Enter the age of students. \n");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	secondLargest(arr, n);
}
int secondLargest(int arr[50], int n1)
{
	int i, large, slarge;
	large = slarge = arr[0];
	for(i = 1; i < n1; i++)
	{
		if(large < arr[i])
		{
			slarge = large;
			large = arr[i];
		}
		else if(arr[i] > slarge && arr[i] < large)
			slarge = arr[i];
		else;
	}
	display(slarge);
}
int display(int slarge)
{
	printf("Second Largest Age: %d", slarge);
}
void main()
{
	read();
}
