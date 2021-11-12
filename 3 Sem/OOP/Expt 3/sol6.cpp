#include<iostream>
#include<conio.h>
using namespace std;

int linearSearch(int arr[], int searchElement, int index, int size) {
	if (index == size) {
		cout << "Element not found" << endl;
		return 0;
	}
	if (searchElement == arr[index]) {
		cout << "Element found at index: " << index + 1;
		return index;
	}
	return linearSearch(arr, searchElement, index + 1, size);
}

int main() {
	int size, arr[100], i = 0, searchElement ;
	cout << "Enter size of Array: ";
	cin >> size;
	cout << "Enter elements of the array: "<<endl;
	while (i < size)
	{
		cin >> arr[i];
		i++;
	}
	cout << "Enter the element to be searched: ";
	cin >> searchElement;

	linearSearch(arr, searchElement, 0, size);

	_getch();
}