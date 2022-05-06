//program to find the ascending and the descending of the array element
#include <stdio.h>
void read()
{
	int i, arr[5];
	printf("Enter 5 numbers: \n");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	ascending(arr);
	descending(arr);
}
int ascending(int Aarr[5])
{
	int i, j, swap;
	for(i = 0; i < 4; i++)
	{
		for(j = i; j < 5; j++)
		{
			if(Aarr[i] > Aarr[j])
			{
				swap = Aarr[i];
				Aarr[i] = Aarr[j];
				Aarr[j] = swap;	
			}
		}
	}
	printf("Ascending Order. \n");
	display(Aarr);
}
int descending(int Darr[5])
{
	int i, j, swap;
	for(i = 0; i < 4; i++)
	{
		for(j = i; j < 5; j++)
		{
			if(Darr[i] < Darr[j])
			{
				swap = Darr[i];
				Darr[i] = Darr[j];
				Darr[j] = swap;	
			}
		}
	}
	printf("Descending Order. \n");
	display(Darr);
}
int display(int arr[5])
{
	int i;
	for(i = 0; i < 5; i++)
		printf("%d \n", arr[i]);
}
void main()
{
	read();
}
