#include<stdio.h>
#include<conio.h>

int* sortArray(int arr[], int size)
{
	int i, j, temp;
	for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size;j++)
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	return arr;
}

void binarySearch(int arr[], int key, int size)
{
	int low = 0, high = size - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == arr[mid])
		{
			printf("%d Element Found at location %d", key, mid+1);
			return;
		}
		else if (key < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	if (low > high)
		printf("Element not Found");
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
	binarySearch(data, key, size);
	_getch();
}
