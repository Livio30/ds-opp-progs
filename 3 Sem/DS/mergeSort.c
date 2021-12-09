#include<stdio.h>
#include<conio.h>

void mergeSort(int *, int);
void merge(int *, int, int *, int);

int main()
{
	int arr[100], i, size;

	printf("Enter the number of elements in the array :");
	scanf_s("%d", &size);

	printf("Enter the elements to be sorted: ");
	for (i = 0;i < size; i++)
		scanf_s("%d", &arr[i]);

	mergeSort(arr, size);
	
	printf("The sorted elements are: ");
	for (i = 0;i < size; i++)
		printf("%d\t", arr[i]);
	_getch();
}

void mergeSort(int *arr, int size)
{
	int mid;
	if (size == 1)
		return;
	else
	{
		mid = size / 2;
		mergeSort(arr, mid);
		mergeSort(arr + mid, size - mid);
		merge(arr, mid, arr + mid, size - mid);
	}
}

void merge(int *arr1, int size1, int *arr2, int size2)
{
	int temp_arr[100],  p1, p2, pt;
	p1 = p2 = pt = 0;
	while (p1 < size1 && p2 < size2)
		temp_arr[pt++] = (arr1[p1] < arr2[p2]) ? arr1[p1++] : arr2[p2++];
	while (p1 < size2)
		temp_arr[pt++] = arr1[p1++];

	for (p1 = 0; p1 < pt; p1++)
		arr1[p1] = temp_arr[p1];
}
