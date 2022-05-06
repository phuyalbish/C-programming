//program to read and diaplay the array
#include <stdio.h>
void read()
{
	int arr[5], i;
	printf("Enter 5 numbers: ");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	display(arr);
}
int display(int array[5])
{
	int i;
	printf("Numbers: \n");
	for(i = 0; i < 5; i++)
		printf("%d \n", array[i]);
}
void main()
{
	read();
}

