#include<stdio.h>
#include<conio.h>

void quickSort(int[], int, int);

void main() {
	int arr[100], i, size;

	printf("Enter the number of elements in the array :");
	scanf_s("%d", &size);

	printf("Enter the elements to be sorted: ");
	for (i = 0;i < size; i++)
		scanf_s("%d", &arr[i]);
	 
	quickSort(arr, 0, size - 1);

	printf("The sorted elements are: ");
	for (i = 0;i < size; i++)
		printf("%d  ", arr[i]);
	_getch();
}

void quickSort(int array[], int LB, int UB) {
	int pivot, nxt_pvt, left, right;
	left = LB;
	right = UB;
	pivot = array[left];
	while (LB < UB) {
		while ((array[UB]) >= pivot && (LB < UB))
			UB--;
		if (LB != UB) {
			array[LB] = array[UB];
			LB++;
		}
		while ((array[LB]) <= pivot && (LB < UB))
			LB++;
		if (LB != UB) {
			array[UB] = array[LB];
			UB--;
		}
	}
	array[LB] = pivot;
	nxt_pvt = LB;
	LB = left;
	UB = right;


	if (LB < nxt_pvt)
		quickSort(array, LB, nxt_pvt - 1);
	if (UB > nxt_pvt)
		quickSort(array, nxt_pvt + 1, UB);
}
