#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void merge(int arr[], int p, int q, int r)
{
	int i, j, k;
	int n1 = q - p + 1;
	int n2 = r - q;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
		L[i] = arr[p + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[q + 1 + j];
	i = 0; 
	j = 0; 
	k = p; 
	while (i < n1 && j < n2) 
	{
		if (L[i] <= R[j]) 
		{
			arr[k] = L[i];
			i++;
		}
		else 
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	 {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	 {
		arr[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int l, int r)
{
	if (l < r) {

		int m = l + (r - l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
             }
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{  
	 int n , i;
	int arr[MAX];
	
	printf("Size of the Array:");
	scanf("%d",&n);
	printf("enter elements:");
	for (i=0;i<n;i++)
	scanf("%d",&arr[i]);

	mergeSort(arr, 0, n - 1);

	printf("\nSorted array is \n");
     printArray(arr,n);
}
