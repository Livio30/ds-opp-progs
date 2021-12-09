#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


void maxHeapify(int  *arr,int i,int size)
{
    int largest=i,left,right;
    left=(2*i)+1;
    right=(2*i)+2;
    if(left<size && arr[left]>arr[largest])
        largest=left;
    if(right<size && arr[right]>arr[largest])
        largest=right;
    if(largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        maxHeapify(arr,largest,size);
    }
}


void createHeap(int *arr,int size)
{
    int i;

    for(i=(size-2)/2; i>=0;i--)
        maxHeapify(arr,i,size);
}

void heapSort(int *arr,int size)
{
    createHeap(arr,size);
    while(size>1)
    {
        swap(&arr[0],&arr[size-1]);
        --size;
        maxHeapify(arr,0,size);
    }
}


int main()
{
    int i,arr[100],size;
    printf("Enter number of elements in an array:");
    scanf("%d",&size);
    printf("Enter %d elements:",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    heapSort(arr,size);
    printf("Asscending order:");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}
