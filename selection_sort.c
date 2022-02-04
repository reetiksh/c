
#include<stdio.h>
#include<math.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[],int n)
{
    int i,j,min_inx;
    for(i=0;i<n-1;i++){
        min_inx=i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[min_inx])
                min_inx=j;
        swap(&arr[min_inx],&arr[i]);
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[]={5,80,73,15,25,90,66,17,90,5,2,55,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}

