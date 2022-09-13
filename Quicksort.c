#include<stdio.h>

int partition(int arr[],int low,int high)
{
    int pivot = arr[low];
    int start = low;
    int end = high;
    while(start<end)
    {
        while(arr[start] <= pivot)
        {
            start++;
        }
        while(arr[end] > pivot)
        {
            end --;
        }
        if(start < end)
        {
            int temp;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp;
    temp = arr[low];
arr[low] = arr[end];
    arr[end] = temp;
    return end;
}



int quicksort(int arr[],int low,int high)
{
    if(low<high)

{
int loc = partition(arr,low,high);
quicksort(arr,low,loc-1);
quicksort(arr,loc + 1,high);
}
return 0;
}

void main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
for(int i = 0;i<n;i++)
{
    printf("ENter the %d element",i+1);
    scanf("%d",&arr[i]);
}
printf("The array elements are\n");
for(int i = 0;i<n;i++)
{
    printf("%d  ",arr[i]);
}

int low = 0;
int high = n-1;
quicksort(arr,low,high);

for(int i = 0;i<n;i++)
{
    printf("%d ",arr[i]);
}
}
