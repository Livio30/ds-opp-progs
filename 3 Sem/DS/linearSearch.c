#include<stdio.h>
#include<conio.h>

int linearSearch(int a[], int key, int size)
{
	for (int i = 0;i<size;i++)
		if (a[i] == key)
			return 1;
	return 0;
}

int main()
{
	int i, size, data[100], key;
	printf("Enter the number of elements\n");
	scanf_s("%d", &size);
	printf("Enter the elements\n");
	for (i = 0; i<size;i++) 
		scanf_s("%d", &data[i]);
	printf("Enter element to be found: ");
	scanf_s("%d", &key);
	if (linearSearch(data, key, size) == 0) 
		printf("Key was not found\n");
	else
		printf("Element found was %d \n", key);
	_getch();
}
