#include<Stdio.h>
#include<conio.h>

void insertionSort(int data[], int size)
{
	int i, j, temp;
	for (i = 1;i < size; i++) {
		temp = data[i];
		for (j = i - 1;j >= 0; j--) {
			if (data[j] > temp) {
				data[j + 1] = data[j];
			}
			else {
				break;
			}
		}
		data[j + 1] = temp;

	}
}

int main()
{
	int i, size, data[100], key;
	printf("Enter the number of elements\n");
	scanf_s("%d", &size);
	printf("Enter the elements\n");
	for (i = 0; i<size;i++)
		scanf_s("%d", &data[i]);
	insertionSort(data, size);

	printf("The sorted elements are : \n");
	for (i = 0;i < size; i++)
		printf("%d  ", data[i]);
	_getch();
}
